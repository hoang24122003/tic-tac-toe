#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class start;
}

class start : public QDialog
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();

private slots:

    void checkResult();

    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_Restart_clicked();

    void on_start_rejected();

    void on_pushButton_clicked();

private:
    Ui::start *ui;
};

#endif // START_H
