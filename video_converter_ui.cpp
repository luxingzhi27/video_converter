/********************************************************************************
** Form generated from reading UI file 'video_converter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VIDEO_CONVERTER_UI_H
#define VIDEO_CONVERTER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *targetTypeLabel;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *targetTypeComboBox;
    QGridLayout *gridLayout;
    QLabel *sourceLabel;
    QPushButton *openFileButton;
    QLabel *targetLabel;
    QPushButton *saveFileButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 249);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        targetTypeLabel = new QLabel(centralwidget);
        targetTypeLabel->setObjectName(QString::fromUtf8("targetTypeLabel"));

        horizontalLayout_2->addWidget(targetTypeLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        targetTypeComboBox = new QComboBox(centralwidget);
        targetTypeComboBox->addItem(QString());
        targetTypeComboBox->addItem(QString());
        targetTypeComboBox->addItem(QString());
        targetTypeComboBox->addItem(QString());
        targetTypeComboBox->setObjectName(QString::fromUtf8("targetTypeComboBox"));

        horizontalLayout_2->addWidget(targetTypeComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sourceLabel = new QLabel(centralwidget);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));
        sourceLabel->setMinimumSize(QSize(477, 45));

        gridLayout->addWidget(sourceLabel, 0, 0, 1, 1);

        openFileButton = new QPushButton(centralwidget);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setMaximumSize(QSize(134, 45));

        gridLayout->addWidget(openFileButton, 0, 1, 1, 1);

        targetLabel = new QLabel(centralwidget);
        targetLabel->setObjectName(QString::fromUtf8("targetLabel"));
        targetLabel->setMinimumSize(QSize(477, 45));

        gridLayout->addWidget(targetLabel, 1, 0, 1, 1);

        saveFileButton = new QPushButton(centralwidget);
        saveFileButton->setObjectName(QString::fromUtf8("saveFileButton"));
        saveFileButton->setMaximumSize(QSize(134, 45));

        gridLayout->addWidget(saveFileButton, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout->addWidget(startButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 40));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "video_converter", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        targetTypeLabel->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\233\256\346\240\207\350\247\206\351\242\221\346\240\274\345\274\217", nullptr));
        targetTypeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "mp4", nullptr));
        targetTypeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "mkv", nullptr));
        targetTypeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "avi", nullptr));
        targetTypeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "wmv", nullptr));

        sourceLabel->setText(QCoreApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\346\272\220\350\247\206\351\242\221\346\226\207\344\273\266", nullptr));
        openFileButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        targetLabel->setText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\233\256\346\240\207\350\247\206\351\242\221\346\226\207\344\273\266\344\277\235\345\255\230\345\234\260\345\235\200", nullptr));
        saveFileButton->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\275\254\346\215\242", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIDEO_CONVERTER_UI_H
