#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UE4PakTool.h"

class UE4PakTool : public QMainWindow
{
	Q_OBJECT

public:
	UE4PakTool(QWidget *parent = Q_NULLPTR);

private slots:
	void SlotGenerateBat();

	void SlotRunBatBat();

	void SlotEngineDirSelect();

	void SlotProjectDirSelect();

	void SlotArchiveDirSelect();

	void SlotProjectDirChanged(const QString &);

	void SlotDirChanged();
private:
	QString GetBatStr();

	void ReadConfig();

	void SetLastProjectDir(const QString&);

private:
	Ui::UE4PakToolClass ui;
};
