#include "dialog.h"
#include "ui_dialog.h"
#include<QPainter>
#include<QString>
#include<QTime>
#include<QTimer>

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


    QTimer *dialogtime = new QTimer(this);
    connect(dialogtime, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新

    dialogtime->start(1000);


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
    uchar tmpnum1_in = 1;
    if (tmpnum1_in)
    {
        QPainter point1_in(this);
        QPixmap pointpix1_in;
        pointpix1_in.load("./img2/2.png");
        point1_in.drawPixmap(523,276,14,14,pointpix1_in);
    }

    uchar tmpnum1_out = 1;
    if (tmpnum1_out)
    {
        QPainter point1_out(this);
        QPixmap pointpix1_out;
        pointpix1_out.load("./img2/2.png");
        point1_out.drawPixmap(607,276,14,14,pointpix1_out);
    }



    uchar tmpnum2_in = 1;
    if (tmpnum2_in)
    {
        QPainter point2_in(this);
        QPixmap pointpix2_in;
        pointpix2_in.load("./img2/2.png");
        point2_in.drawPixmap(523,309,14,14,pointpix2_in);
    }

    uchar tmpnum2_out = 1;
    if (tmpnum2_out)
    {
        QPainter point2_out(this);
        QPixmap pointpix2_out;
        pointpix2_out.load("./img2/2.png");
        point2_out.drawPixmap(607,309,14,14,pointpix2_out);
    }



    uchar tmpnum3_in = 1;
    if (tmpnum3_in)
    {
        QPainter point3_in(this);
        QPixmap pointpix3_in;
        pointpix3_in.load("./img2/2.png");
        point3_in.drawPixmap(523,342,14,14,pointpix3_in);
    }

    uchar tmpnum3_out = 1;
    if (tmpnum3_out)
    {
        QPainter point3_out(this);
        QPixmap pointpix3_out;
        pointpix3_out.load("./img2/2.png");
        point3_out.drawPixmap(607,342,14,14,pointpix3_out);
    }


    uchar tmpnum4_in = 1;
    if (tmpnum4_in)
    {
        QPainter point4_in(this);
        QPixmap pointpix4_in;
        pointpix4_in.load("./img2/2.png");
        point4_in.drawPixmap(523,374,14,14,pointpix4_in);
    }

    uchar tmpnum4_out = 1;
    if (tmpnum4_out)
    {
        QPainter point4_out(this);
        QPixmap pointpix4_out;
        pointpix4_out.load("./img2/2.png");
        point4_out.drawPixmap(607,374,14,14,pointpix4_out);
    }


    uchar tmpnum5_in = 1;
    if (tmpnum5_in)
    {
        QPainter point5_in(this);
        QPixmap pointpix5_in;
        pointpix5_in.load("./img2/2.png");
        point5_in.drawPixmap(523,407,14,14,pointpix5_in);
    }

    uchar tmpnum5_out = 1;
    if (tmpnum5_out)
    {
        QPainter point5_out(this);
        QPixmap pointpix5_out;
        pointpix5_out.load("./img2/2.png");
        point5_out.drawPixmap(607,407,14,14,pointpix5_out);
    }


    uchar tmpnum6_in = 1;
    if (tmpnum6_in)
    {
        QPainter point6_in(this);
        QPixmap pointpix6_in;
        pointpix6_in.load("./img2/2.png");
        point6_in.drawPixmap(523,440,14,14,pointpix6_in);
    }

    uchar tmpnum6_out = 1;
    if (tmpnum6_out)
    {
        QPainter point6_out(this);
        QPixmap pointpix6_out;
        pointpix6_out.load("./img2/2.png");
        point6_out.drawPixmap(607,440,14,14,pointpix6_out);
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





