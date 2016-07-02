#include "camera.h"
#include "ui_camera.h"
#include <QDebug>

#include<QTime>
#include<QTimer>
#include<QPainter>
#include<QString>
bool ok = true;


extern unsigned char DC;
extern unsigned char SouSa;
extern unsigned char tmpflag;



camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    resize(800,600);

    //QTimer *secondtime = new QTimer(this);
    //connect(secondtime, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新

    connect(ui->show_ptn,SIGNAL(clicked()),this,SLOT(start_thread()));

    connect(ui->stop_ptn,SIGNAL(clicked()),this,SLOT(stop_thread()));

    connect(ui->quit_ptn,SIGNAL(clicked()),this,SLOT(close()));

    /*
    if (ok)
    {
         start_thread();
    }
    else
    {
         //stop_thread();
    }
    */



    camera::move(0,0);//回到原来主窗口的位置

    /*****************************************************************************/
    //2016.6.30
        connect(this,SIGNAL(back()),this,SLOT(Daoche()));
        //secondtime->start(1000);
    /*****************************************************************************/

}

void camera::Daoche()
{

    this->close();
    //this->hide();


}


void camera::start_thread()
{
    video = new video_thread();
    video->start();
    connect(video,SIGNAL(image_data(const QImage &)),this,SLOT(show_picture(const QImage &)));

}
void camera::show_picture(const QImage &img)
{
     ui->show_label->setPixmap(QPixmap::fromImage(img));
}
void camera::stop_thread()
{
    delete video;
}



void camera::on_pushButton_clicked()
{
    //this->close();
    qDebug()<<"camera :: daoche:"<<DC<<endl;
    this->hide();
    this->close();
}

void camera::paintEvent(QPaintEvent *event)
{
    QPainter dp(this);
    QPixmap dppix;
    dppix.load("./img2/camera.bmp");
    dp.drawPixmap(0,0,800,600,dppix);

    ui->label->setText(QString::number(SouSa));
//    if(SouSa == 1)
//    {
//        emit back();
//    }
}

camera::~camera()
{
    delete ui;
}
