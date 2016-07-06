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

extern unsigned char KL;
extern unsigned char SK;

unsigned char   dialogflagRight = 1; //右转
unsigned char   dialogcountRight = 0;//右转



camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    resize(800,600);

    QTimer *secondtime = new QTimer(this);
    connect(secondtime, SIGNAL(timeout()), this, SLOT(update()));  //连接信号槽，定时器超时触发窗体更新

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
        connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
        secondtime->start(1000);
    /*****************************************************************************/

}

void camera::Daoche()
{
    qDebug()<<"cjjdkjflasdkjflskf"<<DC<<endl;
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
    qDebug()<<"camera :: daoche:"<<DC<<endl;
    this->close();
}

void camera::paintEvent(QPaintEvent *event)
{
    QPainter dp(this);
    QPixmap dppix;
    dppix.load("./img2/camera.bmp");
    dp.drawPixmap(0,0,800,600,dppix);

    ui->label->setText(QString::number(SouSa,10));
    ui->label_2->setText(QString::number(KL,10));
    ui->label_3->setText(QString::number(SK,10));
    if(KL == 1)
    {
        //emit back();
        //SouSa = 0;
        KL = 0;

        QMouseEvent* press=new QMouseEvent(QEvent::MouseButtonPress,QPoint(2,2), Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
        QApplication::postEvent(ui->pushButton,press);
        QMouseEvent* release=new QMouseEvent(QEvent::MouseButtonRelease,QPoint(2,2),Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
        QApplication::postEvent(ui->pushButton,release);
    }



    //flagRight = 1; //右转
    QPainter paintRightrh(this);
    QPixmap pixRightrh;
    if(dialogflagRight)
    {
        dialogcountRight++;
        if (dialogcountRight>2)
            dialogcountRight = 0;
        switch(dialogcountRight)
        {
            case 1:pixRightrh.load("./img2/camera.bmp");//14.jpg    ./img2/right.png
            break;
        }
        paintRightrh.drawPixmap(0,0,48,48,pixRightrh);
    }




}

camera::~camera()
{
    delete ui;
}
