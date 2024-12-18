/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_16;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *So_A;
    QLabel *label_3;
    QLineEdit *So_P;
    QRadioButton *rd_tc;
    QLabel *label_11;
    QToolButton *btn_LuuFile;
    QToolButton *btGiaiMa;
    QRadioButton *rd_td;
    QLabel *label_19;
    QLineEdit *So_K;
    QLabel *label_4;
    QLineEdit *So_X;
    QToolButton *bt_taoKhoa;
    QLineEdit *So_D;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QLineEdit *txt_banGiaima;
    QToolButton *btThoat;
    QToolButton *btn_ChonFile_2;
    QToolButton *btn_ChonFile;
    QLineEdit *txt_maHoaBanRo;
    QLabel *label_14;
    QLineEdit *txtBanRo;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_15;
    QLineEdit *So_Y;
    QLabel *label_9;
    QToolButton *btTaoBanRoMoi;
    QLabel *label_18;
    QLabel *label_20;
    QToolButton *btMaHoa;
    QLineEdit *txt_banMaHoaNhanDuoc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1042, 658);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 380, 111, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 50, 71, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(650, 50, 71, 16));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        So_A = new QLineEdit(centralwidget);
        So_A->setObjectName("So_A");
        So_A->setGeometry(QRect(130, 330, 141, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 90, 111, 21));
        So_P = new QLineEdit(centralwidget);
        So_P->setObjectName("So_P");
        So_P->setGeometry(QRect(140, 280, 113, 22));
        rd_tc = new QRadioButton(centralwidget);
        rd_tc->setObjectName("rd_tc");
        rd_tc->setGeometry(QRect(30, 110, 121, 20));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 250, 151, 16));
        label_11->setFont(font);
        btn_LuuFile = new QToolButton(centralwidget);
        btn_LuuFile->setObjectName("btn_LuuFile");
        btn_LuuFile->setGeometry(QRect(470, 500, 101, 22));
        btGiaiMa = new QToolButton(centralwidget);
        btGiaiMa->setObjectName("btGiaiMa");
        btGiaiMa->setEnabled(false);
        btGiaiMa->setGeometry(QRect(700, 330, 121, 22));
        rd_td = new QRadioButton(centralwidget);
        rd_td->setObjectName("rd_td");
        rd_td->setGeometry(QRect(30, 80, 121, 20));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(340, 250, 111, 16));
        So_K = new QLineEdit(centralwidget);
        So_K->setObjectName("So_K");
        So_K->setGeometry(QRect(460, 250, 113, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 370, 161, 16));
        So_X = new QLineEdit(centralwidget);
        So_X->setObjectName("So_X");
        So_X->setGeometry(QRect(140, 180, 113, 22));
        bt_taoKhoa = new QToolButton(centralwidget);
        bt_taoKhoa->setObjectName("bt_taoKhoa");
        bt_taoKhoa->setGeometry(QRect(80, 430, 101, 22));
        So_D = new QLineEdit(centralwidget);
        So_D->setObjectName("So_D");
        So_D->setGeometry(QRect(140, 380, 113, 22));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 150, 121, 21));
        label_8->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 151, 31));
        txt_banGiaima = new QLineEdit(centralwidget);
        txt_banGiaima->setObjectName("txt_banGiaima");
        txt_banGiaima->setGeometry(QRect(660, 400, 231, 91));
        btThoat = new QToolButton(centralwidget);
        btThoat->setObjectName("btThoat");
        btThoat->setGeometry(QRect(810, 560, 101, 22));
        btn_ChonFile_2 = new QToolButton(centralwidget);
        btn_ChonFile_2->setObjectName("btn_ChonFile_2");
        btn_ChonFile_2->setGeometry(QRect(790, 90, 101, 22));
        btn_ChonFile = new QToolButton(centralwidget);
        btn_ChonFile->setObjectName("btn_ChonFile");
        btn_ChonFile->setGeometry(QRect(460, 90, 101, 22));
        txt_maHoaBanRo = new QLineEdit(centralwidget);
        txt_maHoaBanRo->setObjectName("txt_maHoaBanRo");
        txt_maHoaBanRo->setEnabled(true);
        txt_maHoaBanRo->setGeometry(QRect(350, 400, 231, 91));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 280, 111, 20));
        txtBanRo = new QLineEdit(centralwidget);
        txtBanRo->setObjectName("txtBanRo");
        txtBanRo->setGeometry(QRect(350, 130, 231, 91));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(660, 90, 121, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 91, 16));
        label->setFont(font);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(60, 330, 71, 16));
        So_Y = new QLineEdit(centralwidget);
        So_Y->setObjectName("So_Y");
        So_Y->setGeometry(QRect(460, 300, 113, 22));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(660, 370, 161, 16));
        btTaoBanRoMoi = new QToolButton(centralwidget);
        btTaoBanRoMoi->setObjectName("btTaoBanRoMoi");
        btTaoBanRoMoi->setGeometry(QRect(680, 560, 121, 21));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(40, 180, 81, 16));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(340, 300, 111, 21));
        btMaHoa = new QToolButton(centralwidget);
        btMaHoa->setObjectName("btMaHoa");
        btMaHoa->setEnabled(false);
        btMaHoa->setGeometry(QRect(400, 330, 121, 22));
        txt_banMaHoaNhanDuoc = new QLineEdit(centralwidget);
        txt_banMaHoaNhanDuoc->setObjectName("txt_banMaHoaNhanDuoc");
        txt_banMaHoaNhanDuoc->setGeometry(QRect(670, 130, 231, 141));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1042, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "(d= a^x mod p) d =", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "M\303\243 H\303\263a", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gi\341\272\243i m\303\243", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n g\341\273\221c ", nullptr));
        rd_tc->setText(QCoreApplication::translate("MainWindow", "T\303\271y ch\341\273\215n", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Public Key (p,a,d)", nullptr));
        btn_LuuFile->setText(QCoreApplication::translate("MainWindow", "L\306\260u file", nullptr));
        btGiaiMa->setText(QCoreApplication::translate("MainWindow", "Th\341\273\261c hi\341\273\207n gi\341\272\243i m\303\243", nullptr));
        rd_td->setText(QCoreApplication::translate("MainWindow", " T\341\273\261 \304\221\341\273\231ng", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 ng\341\272\253u nhi\303\252n k =", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n \304\221\306\260\341\273\243c m\303\243 h\303\263a", nullptr));
        bt_taoKhoa->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o kh\303\263a", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Private key (x)", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Demo M\303\243 H\303\263a ElGamal</p></body></html>", nullptr));
        btThoat->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
        btn_ChonFile_2->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\215n File", nullptr));
        btn_ChonFile->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\215n File", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "(S\341\273\221 nguy\303\252n t\341\273\221) p = ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n \304\221\306\260\341\273\243c m\303\243 h\303\263a", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o Kh\303\263a", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "(S\341\273\221 alpha) a = ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "V\304\203n b\341\272\243n \304\221\306\260\341\273\243c gi\341\272\243i m\303\243", nullptr));
        btTaoBanRoMoi->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o v\304\203n b\341\272\243n m\341\273\233i ", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 nguy\303\252n x =", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "(y=a^k mod p) y =", nullptr));
        btMaHoa->setText(QCoreApplication::translate("MainWindow", "Th\341\273\261c hi\341\273\207n m\303\243 h\303\263a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
