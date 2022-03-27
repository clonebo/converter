/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QComboBox *scale;
    QLineEdit *mm_scale;
    QFrame *line;
    QLabel *label;
    QLineEdit *mm;
    QLineEdit *inch;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ft;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *tab_2;
    QLineEdit *lbs;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *kg;
    QLineEdit *kg_scale;
    QFrame *line_2;
    QLabel *label_7;
    QComboBox *scale_2;
    QLabel *label_8;
    QWidget *tab;
    QLineEdit *x_orig;
    QLineEdit *x_pic;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *y_orig;
    QLineEdit *y_pic;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *x_factor;
    QLabel *y_factor;
    QPushButton *pushButton_3;
    QLineEdit *x_messure;
    QFrame *line_3;
    QLabel *label_19;
    QLineEdit *y_messure;
    QLabel *label_20;
    QLineEdit *x;
    QLineEdit *y;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(756, 407);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        scale = new QComboBox(tab_1);
        scale->addItem(QString());
        scale->addItem(QString());
        scale->addItem(QString());
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setGeometry(QRect(10, 160, 86, 25));
        mm_scale = new QLineEdit(tab_1);
        mm_scale->setObjectName(QString::fromUtf8("mm_scale"));
        mm_scale->setGeometry(QRect(10, 210, 142, 25));
        line = new QFrame(tab_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 110, 161, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 171, 17));
        mm = new QLineEdit(tab_1);
        mm->setObjectName(QString::fromUtf8("mm"));
        mm->setGeometry(QRect(10, 80, 142, 25));
        inch = new QLineEdit(tab_1);
        inch->setObjectName(QString::fromUtf8("inch"));
        inch->setGeometry(QRect(160, 30, 142, 25));
        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 151, 17));
        label_3 = new QLabel(tab_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 67, 17));
        label_4 = new QLabel(tab_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 190, 251, 21));
        ft = new QLineEdit(tab_1);
        ft->setObjectName(QString::fromUtf8("ft"));
        ft->setGeometry(QRect(10, 30, 141, 25));
        label_9 = new QLabel(tab_1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 67, 17));
        label_10 = new QLabel(tab_1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 80, 521, 17));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lbs = new QLineEdit(tab_2);
        lbs->setObjectName(QString::fromUtf8("lbs"));
        lbs->setGeometry(QRect(10, 30, 141, 25));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 111, 17));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 60, 131, 17));
        kg = new QLineEdit(tab_2);
        kg->setObjectName(QString::fromUtf8("kg"));
        kg->setGeometry(QRect(10, 80, 141, 25));
        kg_scale = new QLineEdit(tab_2);
        kg_scale->setObjectName(QString::fromUtf8("kg_scale"));
        kg_scale->setGeometry(QRect(10, 210, 141, 25));
        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 120, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 190, 241, 17));
        scale_2 = new QComboBox(tab_2);
        scale_2->addItem(QString());
        scale_2->addItem(QString());
        scale_2->addItem(QString());
        scale_2->setObjectName(QString::fromUtf8("scale_2"));
        scale_2->setGeometry(QRect(10, 160, 86, 25));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 130, 67, 17));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        x_orig = new QLineEdit(tab);
        x_orig->setObjectName(QString::fromUtf8("x_orig"));
        x_orig->setGeometry(QRect(10, 30, 113, 25));
        x_pic = new QLineEdit(tab);
        x_pic->setObjectName(QString::fromUtf8("x_pic"));
        x_pic->setGeometry(QRect(140, 30, 113, 25));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 67, 17));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(140, 10, 67, 17));
        y_orig = new QLineEdit(tab);
        y_orig->setObjectName(QString::fromUtf8("y_orig"));
        y_orig->setGeometry(QRect(10, 80, 113, 25));
        y_pic = new QLineEdit(tab);
        y_pic->setObjectName(QString::fromUtf8("y_pic"));
        y_pic->setGeometry(QRect(140, 80, 113, 25));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 60, 91, 17));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(140, 60, 67, 17));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(280, 30, 67, 17));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(280, 80, 67, 17));
        x_factor = new QLabel(tab);
        x_factor->setObjectName(QString::fromUtf8("x_factor"));
        x_factor->setGeometry(QRect(350, 30, 67, 17));
        y_factor = new QLabel(tab);
        y_factor->setObjectName(QString::fromUtf8("y_factor"));
        y_factor->setGeometry(QRect(350, 80, 67, 17));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 50, 89, 25));
        x_messure = new QLineEdit(tab);
        x_messure->setObjectName(QString::fromUtf8("x_messure"));
        x_messure->setGeometry(QRect(10, 150, 113, 25));
        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 120, 731, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 130, 67, 17));
        y_messure = new QLineEdit(tab);
        y_messure->setObjectName(QString::fromUtf8("y_messure"));
        y_messure->setGeometry(QRect(10, 200, 113, 25));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 180, 67, 17));
        x = new QLineEdit(tab);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(140, 150, 113, 25));
        y = new QLineEdit(tab);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(140, 200, 113, 25));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(140, 130, 67, 17));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(140, 180, 67, 17));
        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(410, 170, 67, 17));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 756, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        scale->setItemText(0, QCoreApplication::translate("MainWindow", "1/20", nullptr));
        scale->setItemText(1, QCoreApplication::translate("MainWindow", "1/24", nullptr));
        scale->setItemText(2, QCoreApplication::translate("MainWindow", "1/29", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "L\303\244nge in inch ''", nullptr));
#if QT_CONFIG(tooltip)
        mm->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Milimeter Mass</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        inch->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoll Mass</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        inch->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoll</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        inch->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "L\303\244nge in Milimeter", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Massstab", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Massst\303\244bliche L\303\244nge in mm", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Foot Ft '", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Warnung: Convertierung von Milimeter nach ' und '' ist fehlerhaft", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "L\303\244ngenumrechnung", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gewicht in LBS", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Gewicht in Kg", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Massst\303\244bliches Gewicht in Kg", nullptr));
        scale_2->setItemText(0, QCoreApplication::translate("MainWindow", "1/20", nullptr));
        scale_2->setItemText(1, QCoreApplication::translate("MainWindow", "1/24", nullptr));
        scale_2->setItemText(2, QCoreApplication::translate("MainWindow", "1/29", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Massstab", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Gewichtsumrechnung", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "X Original", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "X Bild", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Y Original", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Y Bild", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Faktor X:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Faktor Y: ", nullptr));
        x_factor->setText(QString());
        y_factor->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Einmessen", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "X Bild", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Y Bild", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "L\303\244nge X", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "L\303\244nge Y", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Error Box", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Bildmassstab", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Umrechnen", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "L\303\266schen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
