/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Jul 6 17:50:35 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QRadioButton *radioButton;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(847, 627);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 560, 71, 41));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 270, 31, 31));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 240, 61, 31));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 270, 31, 31));
        radioButton = new QRadioButton(Dialog);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(240, 10, 171, 61));
        QFont font;
        font.setPointSize(13);
        radioButton->setFont(font);
        radioButton->setCursor(QCursor(Qt::ArrowCursor));
        radioButton->setCheckable(true);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 340, 31, 31));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 310, 61, 31));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 340, 31, 31));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 420, 31, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 400, 61, 31));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(290, 420, 31, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "back", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_3->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Dialog", "RadioButton", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pushButton_5->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Dialog", "-", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_7->setText(QApplication::translate("Dialog", "+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
