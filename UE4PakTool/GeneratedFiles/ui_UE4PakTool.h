/********************************************************************************
** Form generated from reading UI file 'UE4PakTool.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UE4PAKTOOL_H
#define UI_UE4PAKTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UE4PakToolClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *projectDir;
    QPushButton *projectDirSelect;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *engineDir;
    QPushButton *engineDirSelect;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *archiveDir;
    QPushButton *archiveDirDirSelect;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *build;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *server;
    QComboBox *serverConfig;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *client;
    QComboBox *clientConfig;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *windowNoEdit;
    QComboBox *windowNoEditConfig;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButton_5;
    QRadioButton *cook;
    QRadioButton *radioButton_4;
    QCheckBox *FastCook;
    QCheckBox *iterate;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QCheckBox *Compressed;
    QCheckBox *archive;
    QCheckBox *log;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *baseVersion;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *bat;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *generateBat;
    QPushButton *runBat;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;
    QButtonGroup *cookButtonGroup;
    QButtonGroup *pakButtonGroup;

    void setupUi(QMainWindow *UE4PakToolClass)
    {
        if (UE4PakToolClass->objectName().isEmpty())
            UE4PakToolClass->setObjectName(QStringLiteral("UE4PakToolClass"));
        UE4PakToolClass->resize(671, 474);
        centralWidget = new QWidget(UE4PakToolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        projectDir = new QComboBox(centralWidget);
        projectDir->setObjectName(QStringLiteral("projectDir"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectDir->sizePolicy().hasHeightForWidth());
        projectDir->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(projectDir);

        projectDirSelect = new QPushButton(centralWidget);
        projectDirSelect->setObjectName(QStringLiteral("projectDirSelect"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectDirSelect->sizePolicy().hasHeightForWidth());
        projectDirSelect->setSizePolicy(sizePolicy1);
        projectDirSelect->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(projectDirSelect);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        engineDir = new QLineEdit(centralWidget);
        engineDir->setObjectName(QStringLiteral("engineDir"));

        horizontalLayout->addWidget(engineDir);

        engineDirSelect = new QPushButton(centralWidget);
        engineDirSelect->setObjectName(QStringLiteral("engineDirSelect"));
        sizePolicy1.setHeightForWidth(engineDirSelect->sizePolicy().hasHeightForWidth());
        engineDirSelect->setSizePolicy(sizePolicy1);
        engineDirSelect->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(engineDirSelect);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        archiveDir = new QLineEdit(centralWidget);
        archiveDir->setObjectName(QStringLiteral("archiveDir"));

        horizontalLayout_3->addWidget(archiveDir);

        archiveDirDirSelect = new QPushButton(centralWidget);
        archiveDirDirSelect->setObjectName(QStringLiteral("archiveDirDirSelect"));
        sizePolicy1.setHeightForWidth(archiveDirDirSelect->sizePolicy().hasHeightForWidth());
        archiveDirDirSelect->setSizePolicy(sizePolicy1);
        archiveDirDirSelect->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(archiveDirDirSelect);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        build = new QCheckBox(groupBox);
        build->setObjectName(QStringLiteral("build"));
        build->setChecked(true);

        verticalLayout_5->addWidget(build);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        server = new QCheckBox(groupBox);
        server->setObjectName(QStringLiteral("server"));

        horizontalLayout_4->addWidget(server);

        serverConfig = new QComboBox(groupBox);
        serverConfig->addItem(QString());
        serverConfig->setObjectName(QStringLiteral("serverConfig"));

        horizontalLayout_4->addWidget(serverConfig);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        client = new QCheckBox(groupBox);
        client->setObjectName(QStringLiteral("client"));

        horizontalLayout_5->addWidget(client);

        clientConfig = new QComboBox(groupBox);
        clientConfig->addItem(QString());
        clientConfig->setObjectName(QStringLiteral("clientConfig"));

        horizontalLayout_5->addWidget(clientConfig);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        windowNoEdit = new QCheckBox(groupBox);
        windowNoEdit->setObjectName(QStringLiteral("windowNoEdit"));

        horizontalLayout_6->addWidget(windowNoEdit);

        windowNoEditConfig = new QComboBox(groupBox);
        windowNoEditConfig->addItem(QString());
        windowNoEditConfig->setObjectName(QStringLiteral("windowNoEditConfig"));

        horizontalLayout_6->addWidget(windowNoEditConfig);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);


        horizontalLayout_7->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        radioButton_5 = new QRadioButton(groupBox_2);
        cookButtonGroup = new QButtonGroup(UE4PakToolClass);
        cookButtonGroup->setObjectName(QStringLiteral("cookButtonGroup"));
        cookButtonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout_11->addWidget(radioButton_5);

        cook = new QRadioButton(groupBox_2);
        cookButtonGroup->addButton(cook);
        cook->setObjectName(QStringLiteral("cook"));
        cook->setChecked(true);

        horizontalLayout_11->addWidget(cook);

        radioButton_4 = new QRadioButton(groupBox_2);
        cookButtonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_11->addWidget(radioButton_4);


        verticalLayout_3->addLayout(horizontalLayout_11);

        FastCook = new QCheckBox(groupBox_2);
        FastCook->setObjectName(QStringLiteral("FastCook"));
        FastCook->setChecked(true);

        verticalLayout_3->addWidget(FastCook);

        iterate = new QCheckBox(groupBox_2);
        iterate->setObjectName(QStringLiteral("iterate"));
        iterate->setChecked(true);

        verticalLayout_3->addWidget(iterate);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        radioButton_7 = new QRadioButton(groupBox_3);
        pakButtonGroup = new QButtonGroup(UE4PakToolClass);
        pakButtonGroup->setObjectName(QStringLiteral("pakButtonGroup"));
        pakButtonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setChecked(true);

        horizontalLayout_12->addWidget(radioButton_7);

        radioButton_6 = new QRadioButton(groupBox_3);
        pakButtonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout_12->addWidget(radioButton_6);


        verticalLayout_2->addLayout(horizontalLayout_12);

        Compressed = new QCheckBox(groupBox_3);
        Compressed->setObjectName(QStringLiteral("Compressed"));
        Compressed->setChecked(true);

        verticalLayout_2->addWidget(Compressed);

        archive = new QCheckBox(groupBox_3);
        archive->setObjectName(QStringLiteral("archive"));
        archive->setChecked(true);

        verticalLayout_2->addWidget(archive);

        log = new QCheckBox(groupBox_3);
        log->setObjectName(QStringLiteral("log"));
        log->setChecked(false);

        verticalLayout_2->addWidget(log);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_7->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_3 = new QRadioButton(groupBox_4);
        buttonGroup = new QButtonGroup(UE4PakToolClass);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(groupBox_4);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy1.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy1);
        radioButton_2->setChecked(false);

        horizontalLayout_10->addWidget(radioButton_2);

        radioButton = new QRadioButton(groupBox_4);
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        sizePolicy1.setHeightForWidth(radioButton->sizePolicy().hasHeightForWidth());
        radioButton->setSizePolicy(sizePolicy1);
        radioButton->setChecked(false);

        horizontalLayout_10->addWidget(radioButton);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        baseVersion = new QLineEdit(groupBox_4);
        baseVersion->setObjectName(QStringLiteral("baseVersion"));
        sizePolicy1.setHeightForWidth(baseVersion->sizePolicy().hasHeightForWidth());
        baseVersion->setSizePolicy(sizePolicy1);
        baseVersion->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(baseVersion);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_7->addWidget(groupBox_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        bat = new QTextEdit(centralWidget);
        bat->setObjectName(QStringLiteral("bat"));

        verticalLayout->addWidget(bat);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        generateBat = new QPushButton(centralWidget);
        generateBat->setObjectName(QStringLiteral("generateBat"));

        horizontalLayout_8->addWidget(generateBat);

        runBat = new QPushButton(centralWidget);
        runBat->setObjectName(QStringLiteral("runBat"));

        horizontalLayout_8->addWidget(runBat);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        UE4PakToolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UE4PakToolClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 23));
        UE4PakToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UE4PakToolClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UE4PakToolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UE4PakToolClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UE4PakToolClass->setStatusBar(statusBar);

        retranslateUi(UE4PakToolClass);

        QMetaObject::connectSlotsByName(UE4PakToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *UE4PakToolClass)
    {
        UE4PakToolClass->setWindowTitle(QApplication::translate("UE4PakToolClass", "UE4PakTool", nullptr));
        label_2->setText(QApplication::translate("UE4PakToolClass", "\351\241\271\347\233\256\350\267\257\345\276\204", nullptr));
        projectDirSelect->setText(QApplication::translate("UE4PakToolClass", "\302\267\302\267\302\267", nullptr));
        label->setText(QApplication::translate("UE4PakToolClass", "\345\274\225\346\223\216\350\267\257\345\276\204", nullptr));
        engineDirSelect->setText(QApplication::translate("UE4PakToolClass", "\302\267\302\267\302\267", nullptr));
        label_3->setText(QApplication::translate("UE4PakToolClass", "\345\275\222\346\241\243\350\267\257\345\276\204", nullptr));
        archiveDirDirSelect->setText(QApplication::translate("UE4PakToolClass", "\302\267\302\267\302\267", nullptr));
        groupBox->setTitle(QApplication::translate("UE4PakToolClass", "\347\274\226\350\257\221", nullptr));
        build->setText(QApplication::translate("UE4PakToolClass", "\347\274\226\350\257\221", nullptr));
        server->setText(QApplication::translate("UE4PakToolClass", "\346\234\215\345\212\241\345\231\250", nullptr));
        serverConfig->setItemText(0, QApplication::translate("UE4PakToolClass", "DebugGame", nullptr));

        client->setText(QApplication::translate("UE4PakToolClass", "\345\256\242\346\210\267\347\253\257", nullptr));
        clientConfig->setItemText(0, QApplication::translate("UE4PakToolClass", "DebugGame", nullptr));

        windowNoEdit->setText(QApplication::translate("UE4PakToolClass", "\345\215\225\346\234\272\347\211\210", nullptr));
        windowNoEditConfig->setItemText(0, QApplication::translate("UE4PakToolClass", "DebugGame", nullptr));

        groupBox_2->setTitle(QApplication::translate("UE4PakToolClass", "\347\203\230\347\204\231", nullptr));
        radioButton_5->setText(QApplication::translate("UE4PakToolClass", "none", nullptr));
        cook->setText(QApplication::translate("UE4PakToolClass", "cook", nullptr));
        radioButton_4->setText(QApplication::translate("UE4PakToolClass", "skip", nullptr));
        FastCook->setText(QApplication::translate("UE4PakToolClass", "\345\277\253\351\200\237\347\203\230\347\204\231", nullptr));
        iterate->setText(QApplication::translate("UE4PakToolClass", "\350\277\255\344\273\243\347\203\230\347\204\231", nullptr));
        groupBox_3->setTitle(QApplication::translate("UE4PakToolClass", "\346\211\223\345\214\205", nullptr));
        radioButton_7->setText(QApplication::translate("UE4PakToolClass", "pak", nullptr));
        radioButton_6->setText(QApplication::translate("UE4PakToolClass", "skip", nullptr));
        Compressed->setText(QApplication::translate("UE4PakToolClass", "\345\216\213\347\274\251", nullptr));
        archive->setText(QApplication::translate("UE4PakToolClass", "\345\275\222\346\241\243", nullptr));
        log->setText(QApplication::translate("UE4PakToolClass", "\346\227\245\345\277\227", nullptr));
        groupBox_4->setTitle(QApplication::translate("UE4PakToolClass", "\350\241\245\344\270\201", nullptr));
        radioButton_3->setText(QApplication::translate("UE4PakToolClass", "none", nullptr));
        radioButton_2->setText(QApplication::translate("UE4PakToolClass", "base", nullptr));
        radioButton->setText(QApplication::translate("UE4PakToolClass", "patch", nullptr));
        label_4->setText(QApplication::translate("UE4PakToolClass", "version", nullptr));
        baseVersion->setText(QApplication::translate("UE4PakToolClass", "1.0", nullptr));
        generateBat->setText(QApplication::translate("UE4PakToolClass", "\347\224\237\346\210\220\350\204\232\346\234\254", nullptr));
        runBat->setText(QApplication::translate("UE4PakToolClass", "\350\277\220\350\241\214\350\204\232\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UE4PakToolClass: public Ui_UE4PakToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UE4PAKTOOL_H
