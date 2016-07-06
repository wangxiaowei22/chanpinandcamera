#include "dialog.h"
#include "ui_dialog.h"
#include<QPainter>
#include<QString>

/*******************************************************************************/
//Date:2016.6.1
//Author:wushengjun
//speed defined
int zl = 5;

/*******************************************************************************/
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    resize(800,600);
    Dialog::move(0,0);//回到原来主窗口的位置
    setWindowFlags(windowFlags()|Qt::FramelessWindowHint|Qt::WindowTitleHint);//删除 最小化、最大化、关闭按钮
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter dp(this);
    QPixmap dppix;
    dppix.load("./img2/setup2.bmp");
    dp.drawPixmap(0,0,800,600,dppix);


    /********************************************************************************************************/
    //2016.7.6 radiobutton input and output;
    uchar tmpnum = 1;
    if (tmpnum)
    {
        QPainter point(this);
        QPixmap pointpix;
        pointpix.load("./img2/2.png");
        point.drawPixmap(523,276,14,14,pointpix);
    }

    uchar tmpnum2 = 1;
    if (tmpnum2)
    {
        QPainter point_out(this);
        QPixmap pointpix_out;
        pointpix_out.load("./img2/2.png");
        point_out.drawPixmap(607,276,14,14,pointpix_out);
    }




   // uchar tmpnum = 1;
    if (tmpnum)
    {
        //QPainter point(this);
        //QPixmap pointpix;
        //pointpix.load("./img2/2.png");
        //point.drawPixmap(523,276,14,14,pointpix);
    }




    /********************************************************************************************************/
}

void Dialog::on_pushButton_2_clicked()
{
    zl--;
    ui->label->setText(QString::number(zl,10));
}

void Dialog::on_pushButton_3_clicked()
{
    zl++;
    ui->label->setText(QString::number(zl,10));
}





