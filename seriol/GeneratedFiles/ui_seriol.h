/********************************************************************************
** Form generated from reading UI file 'seriol.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIOL_H
#define UI_SERIOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seriolClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *seriolClass)
    {
        if (seriolClass->objectName().isEmpty())
            seriolClass->setObjectName(QStringLiteral("seriolClass"));
        seriolClass->resize(600, 400);
        centralWidget = new QWidget(seriolClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 60, 171, 41));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 180, 161, 41));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 90, 71, 16));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 180, 61, 16));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 200, 71, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 240, 91, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 80, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 170, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 200, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 60, 91, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 230, 91, 16));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(370, 60, 64, 23));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(360, 230, 64, 23));
        seriolClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(seriolClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        seriolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(seriolClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        seriolClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(seriolClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        seriolClass->setStatusBar(statusBar);

        retranslateUi(seriolClass);

        QMetaObject::connectSlotsByName(seriolClass);
    } // setupUi

    void retranslateUi(QMainWindow *seriolClass)
    {
        seriolClass->setWindowTitle(QApplication::translate("seriolClass", "seriol", nullptr));
        checkBox->setText(QApplication::translate("seriolClass", "Hex\346\230\276\347\244\272", nullptr));
        label->setText(QApplication::translate("seriolClass", "\346\224\266\345\210\260\347\232\204\346\225\260\346\215\256", nullptr));
        label_2->setText(QApplication::translate("seriolClass", "\345\217\221\351\200\201\347\232\204\346\225\260\346\215\256", nullptr));
        checkBox_2->setText(QApplication::translate("seriolClass", "HEX\345\217\221\351\200\201", nullptr));
        pushButton->setText(QApplication::translate("seriolClass", "\345\205\263\351\227\255\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        pushButton_2->setText(QApplication::translate("seriolClass", "\346\270\205\347\251\272\346\216\245\345\217\227\345\214\272", nullptr));
        pushButton_3->setText(QApplication::translate("seriolClass", "\345\217\221\351\200\201", nullptr));
        pushButton_4->setText(QApplication::translate("seriolClass", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        label_3->setText(QApplication::translate("seriolClass", "\345\215\225\346\254\241\346\216\245\345\217\227\345\255\227\350\212\202\346\225\260", nullptr));
        label_4->setText(QApplication::translate("seriolClass", "\345\215\225\346\254\241\345\217\221\351\200\201\345\255\227\350\212\202\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seriolClass: public Ui_seriolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIOL_H
