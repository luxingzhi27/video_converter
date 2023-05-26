/********************************************************************************
** Form generated from reading UI file 'success.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SUCCESS_UI_H
#define SUCCESS_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_successDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *successDialog)
    {
        if (successDialog->objectName().isEmpty())
            successDialog->setObjectName(QString::fromUtf8("successDialog"));
        successDialog->resize(327, 137);
        successDialog->setMaximumSize(QSize(327, 137));
        verticalLayout = new QVBoxLayout(successDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(successDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(successDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(successDialog);

        QMetaObject::connectSlotsByName(successDialog);
    } // setupUi

    void retranslateUi(QDialog *successDialog)
    {
        successDialog->setWindowTitle(QCoreApplication::translate("successDialog", "\350\275\254\346\215\242\346\210\220\345\212\237", nullptr));
        label->setText(QCoreApplication::translate("successDialog", "\350\275\254\346\215\242\345\267\262\345\256\214\346\210\220", nullptr));
        pushButton->setText(QCoreApplication::translate("successDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class successDialog: public Ui_successDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SUCCESS_UI_H
