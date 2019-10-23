#include "mainwindow.h"
#include "ui_mainwindow.h"
#define _USE_MATH_DEFINES
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString line;
QString item0, item1, item2, item3, item4, item5, item6, item7, item8, item9;//0~9
QString temp1, temp2;
QString itemPI;//pi

double sum;
int flag = 0;//equal
int flag1 = 0;//add
int flag2 = 0;//sub
int flag3 = 0; //mul
int flag4 = 0;//div

void MainWindow::on_pushButton_item0_clicked()
{
    item0 = ui->pushButton_item0->text();
    line += item0;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item1_clicked()
{
    item1 = ui->pushButton_item1->text();
    line += item1;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item2_clicked()
{
    item2 = ui->pushButton_item2->text();
    line += item2;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item3_clicked()
{
    item3 = ui->pushButton_item3->text();
    line += item3;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item4_clicked()
{
    item4 = ui->pushButton_item4->text();
    line += item4;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item5_clicked()
{
    item5 = ui->pushButton_item5->text();
    line += item5;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item6_clicked()
{
    item6 = ui->pushButton_item6->text();
    line += item6;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item7_clicked()
{
    item7 = ui->pushButton_item7->text();
    line += item7;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item8_clicked()
{
    item8 = ui->pushButton_item8->text();
    line += item8;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_item9_clicked()
{
    item9 = ui->pushButton_item9->text();
    line += item9;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_point_clicked()
{
    if(flag == 0)
    {
        line += ".";
        ui->message->setText(line);
    }
    else
    {
        line = ui->message->text();
        line += ".";
        ui->message->setText(line);
        flag = 0;
    }
}

void MainWindow::on_pushButton_add_clicked()
{
    flag1 = 1;
    temp1 = ui->message->text();
    line.clear();
    ui->message->setText(line);
}

void MainWindow::on_pushButton_sub_clicked()
{
    flag2 = 1;
    temp1 = ui->message->text();
    line.clear();
    ui->message->setText(line);
}

void MainWindow::on_pushButton_mul_clicked()
{
    flag3 = 1;
    temp1 = ui->message->text();
    line.clear();
    ui->message->setText(line);
}

void MainWindow::on_pushButton_div_clicked()
{
    flag4 = 1;
    temp1 = ui->message->text();
    line.clear();
    ui->message->setText(line);
}

void MainWindow::on_pushButton_equal_clicked()
{
    flag = 1;
    if(flag1 == 1)
    {
        temp2 = ui->message->text();
        line.clear();
        sum = temp1.toDouble() + temp2.toDouble();
        ui->message->setText(QString::number(sum));
        flag1 = 0;
    }
    if(flag2 == 1)
    {
        temp2 = ui->message->text();
        line.clear();
        sum = temp1.toDouble() - temp2.toDouble();
        ui->message->setText(QString::number(sum));
        flag2 = 0;
    }
    if(flag3 == 1)
    {
        temp2 = ui->message->text();
        line.clear();
        sum = temp1.toDouble() * temp2.toDouble();
        ui->message->setText(QString::number(sum));
        flag3 = 0;
    }
    if(flag4 == 1)
    {
        temp2 = ui->message->text();
        line.clear();
        if(temp2.toDouble() == 0)
        {
            ui->message->setText("ERROR");
        }
        else
        {
            sum = temp1.toDouble() / temp2.toDouble();
            ui->message->setText(QString::number(sum));
        }
        flag4 = 0;
    }
}

void MainWindow::on_pushButton_cancel_clicked()
{
    line.clear();
    temp1.clear();
    temp2.clear();
    sum = 0;
    flag = 0;
    flag1 = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_del_clicked()
{
    line = ui->message->text();
    line.chop(1);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_minus_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = -temp;
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

void MainWindow::on_pushButton_mul_2_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = temp * temp;
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_mul_3_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = temp * temp * temp;
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_sin_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = sin(temp);
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_cos_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = cos(temp);
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_tan_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = tan(temp);
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_itempi_clicked()
{
    itemPI = "3.1415926";
    line += itemPI;
    ui->message->setText(line);
}

void MainWindow::on_pushButton_jiecheng_clicked()
{
    double temp;
    int n = 1;
    int m;
    line = ui->message->text();
    temp = line.toDouble();
    if(temp <= 0){
        if(temp == 0){
            m = 1;
        }
        else{
            m = 0;
        }
    }
    else{
        m = 1;
        while(temp>=n){
            m = m*n;
            n++;
        }
    }
    line = QString::number(m);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_ln_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = log1p(temp-1);
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_lg_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = log10(temp);
    line = QString::number(temp);
    ui->message->setText(line);
}

void MainWindow::on_pushButton_sqrt_clicked()
{
    double temp;
    line = ui->message->text();
    temp = line.toDouble();
    temp = sqrt(temp);
    line = QString::number(temp);
    ui->message->setText(line);
}
