/********************************************************************************
** Form generated from reading UI file 'xrtmpstreamer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRTMPSTREAMER_H
#define UI_XRTMPSTREAMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRtmpStreamerClass
{
public:
    QLineEdit *outUrl;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *inUrl;
    QPushButton *startButton;
    QComboBox *face;
    QLabel *label_3;

    void setupUi(QWidget *XRtmpStreamerClass)
    {
        if (XRtmpStreamerClass->objectName().isEmpty())
            XRtmpStreamerClass->setObjectName(QStringLiteral("XRtmpStreamerClass"));
        XRtmpStreamerClass->resize(600, 291);
        XRtmpStreamerClass->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 75 12pt \"\351\273\221\344\275\223\";\n"
"}\n"
"QWidget\n"
"{\n"
"	background-color: rgb(53, 53, 53);\n"
"}\n"
"\n"
"QPushButton:hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(120, 120, 120, 255), stop:0.495 rgba(39, 39, 39, 255), stop:0.505 rgba(39,39, 39, 255), stop:1 rgba(120, 120,120, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"QPushButton:!hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(39, 39, 39, 255), stop:0.495 rgba(120, 120, 120, 255), stop:0.505 rgba(120,120, 120, 255), stop:1 rgba(39, 39,39, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"\n"
"QLineEdit\n"
"{\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221"
                        "\344\275\223\";\n"
"\n"
"}\n"
"QComboBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"}"));
        outUrl = new QLineEdit(XRtmpStreamerClass);
        outUrl->setObjectName(QStringLiteral("outUrl"));
        outUrl->setGeometry(QRect(190, 50, 321, 41));
        label = new QLabel(XRtmpStreamerClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 111, 20));
        label_2 = new QLabel(XRtmpStreamerClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 121, 20));
        inUrl = new QLineEdit(XRtmpStreamerClass);
        inUrl->setObjectName(QStringLiteral("inUrl"));
        inUrl->setGeometry(QRect(190, 110, 321, 41));
        startButton = new QPushButton(XRtmpStreamerClass);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(350, 170, 91, 61));
        face = new QComboBox(XRtmpStreamerClass);
        face->setObjectName(QStringLiteral("face"));
        face->setGeometry(QRect(200, 190, 69, 22));
        label_3 = new QLabel(XRtmpStreamerClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 190, 81, 20));

        retranslateUi(XRtmpStreamerClass);
        QObject::connect(startButton, SIGNAL(clicked()), XRtmpStreamerClass, SLOT(Stream()));

        QMetaObject::connectSlotsByName(XRtmpStreamerClass);
    } // setupUi

    void retranslateUi(QWidget *XRtmpStreamerClass)
    {
        XRtmpStreamerClass->setWindowTitle(QApplication::translate("XRtmpStreamerClass", "XRtmpStreamer", Q_NULLPTR));
        outUrl->setText(QApplication::translate("XRtmpStreamerClass", "rtmp://192.168.163.136/live", Q_NULLPTR));
        label->setText(QApplication::translate("XRtmpStreamerClass", "\346\216\250\346\265\201RTMP URL\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("XRtmpStreamerClass", "\350\276\223\345\205\245\347\232\204URL\346\210\2260,1\357\274\232", Q_NULLPTR));
        inUrl->setText(QApplication::translate("XRtmpStreamerClass", "0", Q_NULLPTR));
        startButton->setText(QApplication::translate("XRtmpStreamerClass", "\345\274\200\345\247\213", Q_NULLPTR));
        face->clear();
        face->insertItems(0, QStringList()
         << QApplication::translate("XRtmpStreamerClass", "\344\270\200\347\272\247", Q_NULLPTR)
         << QApplication::translate("XRtmpStreamerClass", "\344\272\214\347\272\247", Q_NULLPTR)
         << QApplication::translate("XRtmpStreamerClass", "\344\270\211\347\272\247", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("XRtmpStreamerClass", "\347\276\216\351\242\234\347\272\247\345\210\253\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XRtmpStreamerClass: public Ui_XRtmpStreamerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRTMPSTREAMER_H
