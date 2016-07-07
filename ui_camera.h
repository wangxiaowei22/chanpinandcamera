/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created: Thu Jul 7 08:28:19 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QPushButton *show_ptn;
    QPushButton *stop_ptn;
    QPushButton *quit_ptn;
    QLabel *show_label;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QDialog *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QString::fromUtf8("camera"));
        camera->resize(938, 607);
        show_ptn = new QPushButton(camera);
        show_ptn->setObjectName(QString::fromUtf8("show_ptn"));
        show_ptn->setGeometry(QRect(120, 570, 131, 31));
        stop_ptn = new QPushButton(camera);
        stop_ptn->setObjectName(QString::fromUtf8("stop_ptn"));
        stop_ptn->setGeometry(QRect(270, 570, 151, 31));
        quit_ptn = new QPushButton(camera);
        quit_ptn->setObjectName(QString::fromUtf8("quit_ptn"));
        quit_ptn->setGeometry(QRect(450, 570, 141, 31));
        show_label = new QLabel(camera);
        show_label->setObjectName(QString::fromUtf8("show_label"));
        show_label->setGeometry(QRect(230, 110, 341, 261));
        pushButton = new QPushButton(camera);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 550, 111, 51));
        label = new QLabel(camera);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 130, 71, 31));
        label_2 = new QLabel(camera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 170, 71, 41));
        label_3 = new QLabel(camera);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 210, 66, 41));
        label_4 = new QLabel(camera);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 260, 66, 31));
        label_5 = new QLabel(camera);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 300, 66, 31));
        label_6 = new QLabel(camera);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 350, 66, 31));
        label_7 = new QLabel(camera);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 390, 66, 31));
        label_8 = new QLabel(camera);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 440, 66, 31));
        label_9 = new QLabel(camera);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(640, 140, 66, 31));
        label_10 = new QLabel(camera);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(640, 210, 66, 31));
        label_11 = new QLabel(camera);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(640, 290, 66, 31));
        label_12 = new QLabel(camera);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(640, 360, 66, 31));
        label_13 = new QLabel(camera);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(640, 460, 66, 31));
        label_14 = new QLabel(camera);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 390, 101, 51));
        label_15 = new QLabel(camera);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(310, 450, 111, 41));

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QDialog *camera)
    {
        camera->setWindowTitle(QApplication::translate("camera", "Dialog", 0, QApplication::UnicodeUTF8));
        show_ptn->setText(QApplication::translate("camera", "start", 0, QApplication::UnicodeUTF8));
        stop_ptn->setText(QApplication::translate("camera", "stop", 0, QApplication::UnicodeUTF8));
        quit_ptn->setText(QApplication::translate("camera", "quit", 0, QApplication::UnicodeUTF8));
        show_label->setText(QString());
        pushButton->setText(QApplication::translate("camera", "back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("camera", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
