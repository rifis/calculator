#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_item0_clicked();

    void on_pushButton_item1_clicked();

    void on_pushButton_item2_clicked();

    void on_pushButton_item3_clicked();

    void on_pushButton_item4_clicked();

    void on_pushButton_item5_clicked();

    void on_pushButton_item6_clicked();

    void on_pushButton_item7_clicked();

    void on_pushButton_item8_clicked();

    void on_pushButton_item9_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_mul_2_clicked();

    void on_pushButton_mul_3_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_itempi_clicked();

    void on_pushButton_jiecheng_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_lg_clicked();

    void on_pushButton_sqrt_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
