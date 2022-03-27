#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QComboBox>
#include <tuple>

#include "conv_functions.h"
#include "photoscale.h"
#include "photoscale.cpp"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{   int index = ui->tabWidget->currentIndex(); //check for active Tabs
    if (index == 0)
    {
        QString text_inch = ui->inch->text(); //read the value of inch
        QString text_ft = ui->ft->text(); //read the value of ft
        QString setScale = ui->scale->currentText(); //read the scale set
        QString text_mm = ui->mm->text(); //read mm_convert set
        QString text_mm_scale = ui->mm_scale->text();

        if (text_ft != "" || text_inch != "")
        {
            double value_inch = ft_to_inch(qstring_to_double(text_ft)) + qstring_to_double(text_inch);
            double value_mm = inch_to_mm(value_inch); //converto zoll to mm
            double value_mm_scale = mm_to_scale(value_mm, setScale);
            ui->mm->setText(double_to_qstring(value_mm));
            ui->mm_scale->setText(double_to_qstring(value_mm_scale));
        }
        else if (text_mm != "")
        {
            double value_mm = qstring_to_double(text_mm);
            double value_inch = mm_to_inch(value_mm);
            double value_ft = 0;
            inch_to_ft(value_inch, value_ft);
            double value_mm_scale = mm_to_scale(value_mm, setScale);
            ui->ft->setText(double_to_qstring(value_ft));
            ui->inch->setText(double_to_qstring(value_inch));
            ui->mm_scale->setText(double_to_qstring(value_mm_scale));
        }
        else
        {
            double value_mm_scale = qstring_to_double(text_mm_scale);
            double value_mm = scale_to_mm(value_mm_scale, setScale);
            double value_inch = mm_to_inch(value_mm);
            ui->inch->setText(double_to_qstring(value_inch));
            ui->mm->setText(double_to_qstring(value_mm));
        }
    }else if (index == 1)
    {
        QString text_lbs = ui->lbs->text();
        QString text_kg = ui->kg->text();
        QString text_kg_scale = ui->kg_scale->text();
        QString setScale = ui->scale_2->currentText(); //read the scale2 set
        if (text_lbs != "")
        {
            double value_lbs = qstring_to_double(text_lbs);
            double value_kg = lbs_to_kg(value_lbs);
            double value_kg_scale = kg_to_scale(value_kg, setScale);
            ui->kg->setText(double_to_qstring(value_kg));
            ui->kg_scale->setText(double_to_qstring(value_kg_scale));
        }
        else if (text_kg != "")
        {
            double value_kg = qstring_to_double(text_kg);
            double value_lbs = kg_to_lbs(value_kg);
            double value_kg_scale = kg_to_scale(value_kg, setScale);
            ui->lbs->setText(double_to_qstring(value_lbs));
            ui->kg_scale->setText(double_to_qstring(value_kg_scale));
        }
        else
        {
            double value_kg_scale = qstring_to_double(text_kg_scale);
            double value_kg = scale_to_kg(value_kg_scale, setScale);
            double value_lbs = kg_to_lbs(value_kg);
            ui->lbs->setText(double_to_qstring(value_lbs));
            ui->kg->setText(double_to_qstring(value_kg));
        }
    }
    else if (index == 2)
    {
        double x = qstring_to_double(ui->x_messure->text());
        double y = qstring_to_double(ui->y_messure->text());
    }
}




void MainWindow::on_pushButton_2_clicked()
{   int index = ui->tabWidget->currentIndex(); //check for active Tabs
    switch(index)
    {
    case 0:
        ui->inch->clear();
        ui->ft->clear();
        ui->mm->clear();
        ui->mm_scale->clear();

    case 1:
        ui->lbs->clear();
        ui->kg->clear();
        ui->kg_scale->clear();
    }


}


void MainWindow::on_pushButton_3_clicked()
{
    double x = qstring_to_double(ui->x_orig->text());
    double x_pic = qstring_to_double(ui->x_pic->text());
    double y = qstring_to_double(ui->y_orig->text());
    double y_pic = qstring_to_double(ui->y_pic->text());
    double value_x_factor = 0;
    double value_y_factor = 0;
    PhotoScale picture(x,x_pic,y,y_pic);
    picture.getFactor(value_x_factor, value_y_factor);
    ui->x_factor->setText(double_to_qstring(value_x_factor));
    ui->y_factor->setText(double_to_qstring(value_y_factor));
}

