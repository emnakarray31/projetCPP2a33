/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_adresse;
    QLineEdit *lineEdit_telephone;
    QPushButton *pushButton_supprimer;
    QLabel *label_6;
    QLineEdit *lineEdit_nom;
    QLabel *label_3;
    QPushButton *pushButton_ajouter;
    QLineEdit *lineEdit_dateInscription;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEdit_ID;
    QLabel *label_5;
    QTableView *tableView_clients;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1236, 727);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_prenom = new QLineEdit(centralwidget);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(180, 200, 113, 28));
        lineEdit_adresse = new QLineEdit(centralwidget);
        lineEdit_adresse->setObjectName("lineEdit_adresse");
        lineEdit_adresse->setGeometry(QRect(180, 360, 113, 28));
        lineEdit_telephone = new QLineEdit(centralwidget);
        lineEdit_telephone->setObjectName("lineEdit_telephone");
        lineEdit_telephone->setGeometry(QRect(180, 270, 113, 28));
        pushButton_supprimer = new QPushButton(centralwidget);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(510, 160, 161, 81));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 450, 101, 20));
        lineEdit_nom = new QLineEdit(centralwidget);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(180, 140, 113, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 200, 63, 20));
        pushButton_ajouter = new QPushButton(centralwidget);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(510, 260, 161, 101));
        lineEdit_dateInscription = new QLineEdit(centralwidget);
        lineEdit_dateInscription->setObjectName("lineEdit_dateInscription");
        lineEdit_dateInscription->setGeometry(QRect(180, 450, 113, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 150, 63, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 90, 63, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 270, 81, 20));
        lineEdit_ID = new QLineEdit(centralwidget);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(180, 90, 113, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 370, 63, 20));
        tableView_clients = new QTableView(centralwidget);
        tableView_clients->setObjectName("tableView_clients");
        tableView_clients->setGeometry(QRect(800, 220, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1236, 25));
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
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "date inscri", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "prenom", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "id_client", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "telephone", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
