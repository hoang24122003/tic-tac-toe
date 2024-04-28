#include "start.h"
#include "ui_start.h"

start::start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
}

start::~start()
{
    delete ui;
}

QString p="x";
QString board[10];
QString game_result;
int turn=9;
int x_win=0,o_win=0,draw=0;

void changeTurn(){
    if (p=="x")
        p="o";
    else
        p="x";
}

bool win(){
    return ((board[1]==p && board[2]==p && board[3]==p)
            ||(board[1]==p && board[4]==p && board[7]==p)
            ||(board[1]==p && board[5]==p && board[9]==p)
            ||(board[2]==p && board[5]==p && board[8]==p)
            ||(board[3]==p && board[6]==p && board[9]==p)
            ||(board[3]==p && board[5]==p && board[7]==p)
            ||(board[4]==p && board[5]==p && board[6]==p)
            ||(board[7]==p && board[8]==p && board[9]==p));
}

void start::checkResult(){
    if (game_result==""){
        if (win()){
            game_result="1";
            ui->label->setText(p+ " win!");
            if (p=="x") x_win++;
            if (p=="o") o_win++;
        }
        else if (turn==0){
            ui->label->setText("draw");
            draw++;
        }
    }
    ui->label_2->setNum(x_win);
    ui->label_3->setNum(o_win);
    ui->label_4->setNum(draw);
}

void start::on_b1_clicked()
{
    if (board[1]==""){
        turn--;
        ui->b1->setText(p);
        board[1]=ui->b1->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b2_clicked()
{
    if (board[2]==""){
        turn--;
        ui->b2->setText(p);
        board[2]=ui->b2->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b3_clicked()
{
    if (board[3]==""){
        turn--;
        ui->b3->setText(p);
        board[3]=ui->b3->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b4_clicked()
{
    if (board[4]==""){
        turn--;
        ui->b4->setText(p);
        board[4]=ui->b4->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b5_clicked()
{
    if (board[5]==""){
        turn--;
        ui->b5->setText(p);
        board[5]=ui->b5->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b6_clicked()
{
    if (board[6]==""){
        turn--;
        ui->b6->setText(p);
        board[6]=ui->b6->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b7_clicked()
{
    if (board[7]==""){
        turn--;
        ui->b7->setText(p);
        board[7]=ui->b7->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b8_clicked()
{
    if (board[8]==""){
        turn--;
        ui->b8->setText(p);
        board[8]=ui->b8->text();
        checkResult();
        changeTurn();
    }
}

void start::on_b9_clicked()
{
    if (board[9]==""){
        turn--;
        ui->b9->setText(p);
        board[9]=ui->b9->text();
        checkResult();
        changeTurn();
    }
}

void start::on_Restart_clicked()
{
    ui->b1->setText("");
    ui->b2->setText("");
    ui->b3->setText("");
    ui->b4->setText("");
    ui->b5->setText("");
    ui->b6->setText("");
    ui->b7->setText("");
    ui->b8->setText("");
    ui->b9->setText("");
    ui->label->setText("");
    game_result="";
    for (int i=1;i<10;i++)
        board[i]="";
    p="x";
    turn=9;
}



void start::on_start_rejected()
{
    ui->b1->setText("");
    ui->b2->setText("");
    ui->b3->setText("");
    ui->b4->setText("");
    ui->b5->setText("");
    ui->b6->setText("");
    ui->b7->setText("");
    ui->b8->setText("");
    ui->b9->setText("");
    ui->label->setText("");
    game_result="";
    for (int i=1;i<10;i++)
        board[i]="";
    p="x";
    turn=9;
}



void start::on_pushButton_clicked()
{
    ui->b1->setText("");
    ui->b2->setText("");
    ui->b3->setText("");
    ui->b4->setText("");
    ui->b5->setText("");
    ui->b6->setText("");
    ui->b7->setText("");
    ui->b8->setText("");
    ui->b9->setText("");
    ui->label->setText("");
    game_result="";
    for (int i=1;i<10;i++)
        board[i]="";
    p="x";
    turn=9;
    x_win=0,o_win=0,draw=0;
    ui->label_2->setNum(0);
    ui->label_3->setNum(0);
    ui->label_4->setNum(0);
}

