#include "UE4PakTool.h"
#include <QFile>
#include <QSettings>
#include <QFileDialog>

UE4PakTool::UE4PakTool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.projectDir, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(SlotProjectDirChanged(const QString &)));

	connect(ui.generateBat, SIGNAL(clicked()), this, SLOT(SlotGenerateBat()));
	connect(ui.runBat, SIGNAL(clicked()), this, SLOT(SlotRunBatBat()));

	connect(ui.engineDirSelect, SIGNAL(clicked()), this, SLOT(SlotEngineDirSelect()));
	connect(ui.projectDirSelect, SIGNAL(clicked()), this, SLOT(SlotProjectDirSelect()));
	connect(ui.archiveDirDirSelect, SIGNAL(clicked()), this, SLOT(SlotArchiveDirSelect()));

	connect(ui.engineDir, SIGNAL(textChanged(const QString &)), this, SLOT(SlotDirChanged()));
	connect(ui.archiveDir, SIGNAL(textChanged(const QString &)), this, SLOT(SlotDirChanged()));

	ReadConfig();
}

void UE4PakTool::SlotGenerateBat()
{
	GetBatStr();

	// TODO 生成文件 QFile

}

void UE4PakTool::SlotRunBatBat()
{
	QString batstr = GetBatStr();

	batstr = "start powershell.exe -NoExit " + batstr;
 
	system(batstr.toLocal8Bit().data());
}

void UE4PakTool::SlotEngineDirSelect()
{
	QString fileName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
		ui.engineDir->text(),
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);

	ui.engineDir->setText(fileName);
}

void UE4PakTool::SlotProjectDirSelect()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Directory"),
		ui.projectDir->currentText(),
		QString::fromLocal8Bit("项目文件(*.uproject)"));

	if (fileName.isEmpty())
		return;

	if (ui.projectDir->findText(fileName) < 0)
	{
		ui.projectDir->addItem(fileName);
	}

	// 写配置文件
	QSettings setting(qApp->applicationDirPath() + "/cfg.ini", QSettings::IniFormat);
	setting.beginWriteArray("ProjectDirArray");
	for (int i = 0; i < ui.projectDir->count(); ++i)
	{
		setting.setArrayIndex(i);
		setting.setValue("ProjectDir", ui.projectDir->itemText(i));
	}
	setting.endArray();

	SetLastProjectDir(fileName);
}

void UE4PakTool::SlotArchiveDirSelect()
{
	QString fileName = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
		ui.archiveDir->text(),
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);

	ui.archiveDir->setText(fileName);
}

void UE4PakTool::SlotProjectDirChanged(const QString & text)
{
	SetLastProjectDir(text);

	QString path = text.left(text.lastIndexOf("/"));
	QSettings setting(path + "/cfg.ini", QSettings::IniFormat);

	QString engineDir = setting.value("engineDir").toString();
	QString archiveDir = setting.value("archiveDir").toString();

	ui.engineDir->setText(engineDir);
	ui.archiveDir->setText(archiveDir);
}

void UE4PakTool::SlotDirChanged()
{
	QString path = ui.projectDir->currentText().left(ui.projectDir->currentText().lastIndexOf("/"));
	QSettings setting(path + "/cfg.ini", QSettings::IniFormat);

	QString engineDir = ui.engineDir->text(); 
	QString archiveDir = ui.archiveDir->text(); setting.value("archiveDir").toString();
	setting.setValue("engineDir", engineDir);
	setting.setValue("archiveDir", archiveDir);
}

QString UE4PakTool::GetBatStr()
{
	QString batStr;

	batStr += ui.engineDir->text();
	batStr += "/Build/BatchFiles/RunUAT.bat";
	batStr += " ";
	batStr += "BuildCookRun";
	batStr += " ";
	batStr += "-project=";
	batStr += ui.projectDir->currentText();
	batStr += " ";
	batStr += "-noP4";
	batStr += " ";
	batStr += "-platform=Win64";

	// build
	if (ui.build->isChecked())
	{
		batStr += " ";
		batStr += "-build";
		batStr += " ";
		batStr += "-SkipBuildEditor";
	}

	if (ui.server->isChecked())
	{
		batStr += " ";
		batStr += "-server";
		batStr += " ";
		batStr += "-serverconfig=";
		batStr += ui.serverConfig->currentText();
	}
	if (ui.client->isChecked())
	{
		batStr += " ";
		batStr += "-client";
		batStr += " ";
		batStr += "-clientconfig=";
		batStr += ui.clientConfig->currentText();
	}
	if (ui.windowNoEdit->isChecked())
	{

	}

	// cook
	if (ui.cookButtonGroup->checkedId() == -2)
	{

	}
	else if (ui.cookButtonGroup->checkedId() == -3)
	{
		batStr += " ";
		batStr += "-cook";
	}
	else if (ui.cookButtonGroup->checkedId() == -4)
	{
		batStr += " ";
		batStr += "-skipcook";
	}

	if (ui.FastCook->isChecked())
	{
		batStr += " ";
		batStr += "-FastCook";
	}

	if (ui.iterate->isChecked())
	{
		batStr += " ";
		batStr += "-iterate";
	}

	// pak
	batStr += " ";
	batStr += "-stage";

	if (ui.pakButtonGroup->checkedId() == -2)
	{
		batStr += " ";
		batStr += "-pak";
	}
	else if (ui.pakButtonGroup->checkedId() == -3)
	{
		batStr += " ";
		batStr += "-skippak";
	}

	if (ui.Compressed->isChecked())
	{
		batStr += " ";
		batStr += "-Compressed";
	}

	if (ui.archive->isChecked())
	{
		batStr += " ";
		batStr += "-archive";
		batStr += " ";
		batStr += "-archivedirectory=";
		batStr += ui.archiveDir->text();
	}

	if (ui.log->isChecked())
	{
		batStr += " ";
		batStr += "-utf8output -log";
	}

	// 补丁
	if (ui.buttonGroup->checkedId() == -2)
	{

	}
	else if (ui.buttonGroup->checkedId() == -3)
	{
		batStr += " ";
		batStr += "-createreleaseversion=";
		batStr += ui.baseVersion->text();
	}
	else if (ui.buttonGroup->checkedId() == -4)
	{
		batStr += " ";
		batStr += "-generatepatch";
		batStr += " ";
		batStr += "-basedonreleaseversion=";
		batStr += ui.baseVersion->text();
	}

	ui.bat->setText(batStr);

	return batStr;
}

void UE4PakTool::ReadConfig()
{
	// 读配置文件
	QSettings setting(qApp->applicationDirPath() + "/cfg.ini", QSettings::IniFormat);
	// 得先读取，否则addItem会改掉lastProjectDir的值
	QString lastProjectDir = setting.value("LastProjectDir").toString();

	int size = setting.beginReadArray("ProjectDirArray");

	for (int i = 0; i < size; ++i)
	{
		setting.setArrayIndex(i);
		ui.projectDir->addItem(setting.value("ProjectDir").toString());
	}
	setting.endArray();

	ui.projectDir->setCurrentText(lastProjectDir);
}

void UE4PakTool::SetLastProjectDir(const QString& text)
{
	QSettings setting(qApp->applicationDirPath() + "/cfg.ini", QSettings::IniFormat);
	setting.setValue("LastProjectDir", text);
}
