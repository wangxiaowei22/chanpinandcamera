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



/********************************************************************************************************************/
//2016 6.1  wushengjun
//定义变量 控制图标闪烁。
//
/********************************************************************************************************************/

extern unsigned char flagLeft;  //左转
extern unsigned char countLeft; //左转

extern unsigned char flagBattery;//电瓶指示灯
extern unsigned char countBattery;//电瓶指示灯

extern unsigned char flagWidthlamp; //示宽灯
extern unsigned char countWidthlamp;//示宽灯

extern unsigned char  flagYG; //远光灯
extern unsigned char  countYG;//远光灯

extern unsigned char  flagSW; //水温
extern unsigned char  countSW; //水温

extern unsigned char  flagJG; //近光灯
extern unsigned char  countJG; //近光灯


extern unsigned char  flagJY; //机油
extern unsigned char  countJY; //机油

extern unsigned char  flagLCM; //粮仓满
extern unsigned char  countLCM; //粮仓满

extern unsigned char   flagFDJYR; //发动机预热
extern unsigned char   countFDJYR; //发动机预热

extern unsigned char   flagGL; //过滤
extern unsigned char   countGL; //过滤

extern unsigned char   flagYL; //油量
extern unsigned char    countYL;//油量

extern unsigned char    flagBSQ;//变速器
extern unsigned char    countBSQ;//变速器

extern unsigned char    flagECU;//ecu
extern unsigned char    countECU;//ecu

extern unsigned char    flagPark;//停车
extern unsigned char    countPark; //停车

extern unsigned char   flagFDJGZ; //发动机故障
extern unsigned char   countFDJGZ; //发动机故障

extern unsigned char   flagRight; //右转
extern unsigned char    countRight;//右转

/********************************************************************************************************************/








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


        //加载上方图标 闪烁用到
        //zuo zhuandeng
        QPainter paintLeft(this);
        QPixmap pixLeft;

        if(flagLeft) //左转灯闪烁
        {
            countLeft++;
            if (countLeft>2)
                countLeft = 0;
            switch(countLeft)
            {
                case 1:pixLeft.load("./img2/27.png");//14.jpg
                break;
            }
            paintLeft.drawPixmap(0,0,43,34,pixLeft);

        }


        //电瓶指示灯
        QPainter paintBattery(this);
        QPixmap pixBattery;


        if(flagBattery) //闪烁
        {
            countBattery++;
            if (countBattery>2)
                countBattery = 0;
            switch(countBattery)
            {
                case 1:pixBattery.load("./img2/21.png");//14.jpg
                break;
            }
            paintBattery.drawPixmap(51,0,43,34,pixBattery);
        }

        //示宽灯
        QPainter paintWidthlamp(this);
        QPixmap pixWidthlamp;
        if(flagWidthlamp) //闪烁
        {
            countWidthlamp++;
            if (countWidthlamp>2)
                countWidthlamp = 0;
            switch(countWidthlamp)
            {
                case 1:pixWidthlamp.load("./img2/25.png");//14.jpg
                break;
            }
            paintWidthlamp.drawPixmap(102,0,43,34,pixWidthlamp);
        }

        //远光灯
        QPainter paintYG(this);
        QPixmap pixYG;
        if(flagYG) //闪烁
        {
            countYG++;
            if (countYG>2)
                countYG = 0;
            switch(countYG)
            {
                case 1:pixYG.load("./img2/24.png");//14.jpg
                break;
            }
            paintYG.drawPixmap(153,0,43,34,pixYG);
        }

        //水温
        QPainter paintSW(this);
        QPixmap pixSW;
        if(flagSW) //闪烁
        {
            countSW++;
            if (countSW>2)
                countSW = 0;
            switch(countSW)
            {
                case 1:pixSW.load("./img2/12.png");//14.jpg
                break;
            }
            paintSW.drawPixmap(204,0,35,35,pixSW);
        }

        //近光灯flagJG

        QPainter paintJG(this);
        QPixmap pixJG;
        if(flagJG) //闪烁
        {
            countJG++;
            if (countJG>2)
                countJG = 0;
            switch(countJG)
            {
                case 1:pixJG.load("./img2/15.png");//14.jpg
                break;
            }
            paintJG.drawPixmap(255,0,38,41,pixJG);
        }

        //机油
        QPainter paintJY(this);
        QPixmap pixJY;
        if(flagJY) //闪烁
        {
            countJY++;
            if (countJY>2)
                countJY = 0;
            switch(countJY)
            {
                case 1:pixJY.load("./img2/22.png");//14.jpg
                break;
            }
            paintJY.drawPixmap(306,0,43,43,pixJY);
        }

        //flagLCM = 1; //粮仓满
        QPainter paintLCM(this);
        QPixmap pixLCM;
        if(flagLCM) //闪烁
        {
            countLCM++;
            if (countLCM>2)
                countLCM = 0;
            switch(countLCM)
            {
                case 1:pixLCM.load("./img2/7.png");//14.jpg
                break;
            }
            paintLCM.drawPixmap(357,0,43,43,pixLCM);
        }

        //flagFDJYR = 1; //发动机预热
        QPainter paintFDJYR(this);
        QPixmap pixFDJYR;
        if(flagFDJYR) //闪烁
        {
            countFDJYR++;
            if (countFDJYR>2)
                countFDJYR = 0;
            switch(countFDJYR)
            {
                case 1:pixFDJYR.load("./img2/17.png");//14.jpg
                break;
            }
            paintFDJYR.drawPixmap(357,0,43,43,pixFDJYR);
        }

        // flagGL = 1; //过滤
        QPainter paintGL(this);
        QPixmap pixGL;
        if(flagGL)
        {
            countGL++;
            if (countGL>2)
                countGL = 0;
            switch(countGL)
            {
                case 1:pixGL.load("./img2/20.png");//14.jpg
                break;
            }
            paintGL.drawPixmap(408,0,43,43,pixGL);
        }

        //flagYL = 1; //油量
        QPainter paintYL(this);
        QPixmap pixYL;
        if(flagYL)
        {
            countYL++;
            if (countYL>2)
                countYL = 0;
            switch(countYL)
            {
                case 1:pixYL.load("./img2/23.png");//14.jpg
                break;
            }
            paintYL.drawPixmap(459,0,43,43,pixYL);
        }


        //以上比例都是 + 51

        //flagBSQ = 1;//变速器
        QPainter paintBSQ(this);
        QPixmap pixBSQ;
        if(flagBSQ)
        {
            countBSQ++;
            if (countBSQ>2)
                countBSQ = 0;
            switch(countBSQ)
            {
                case 1:pixBSQ.load("./img2/16.png");//14.jpg
                break;
            }
            paintBSQ.drawPixmap(523,0,43,43,pixBSQ);
        }
            //ecu
            QPainter paintECU(this);
            QPixmap pixECU;
            if(flagECU)
            {
                countECU++;
                if (countECU>2)
                    countECU = 0;
                switch(countECU)
                {
                    case 1:pixECU.load("./img2/91.png");//14.jpg
                    break;
                }
                paintECU.drawPixmap(585,0,43,32,pixECU);
            }


            //flagPark = 1;//停车
            QPainter paintPark(this);
            QPixmap pixPark;
            if(flagPark)
            {
                countPark++;
                if (countPark>2)
                    countPark = 0;
                switch(countPark)
                {
                    case 1:pixPark.load("./img2/18.png");//14.jpg
                    break;
                }
                paintPark.drawPixmap(640,0,43,34,pixPark);
            }

            //
            //flagFDJGZ = 1; //发动机故障
            QPainter paintFDJGZ(this);
            QPixmap pixFDJGZ;
            if(flagFDJGZ)
            {
                countFDJGZ++;
                if (countFDJGZ>2)
                    countFDJGZ = 0;
                switch(countFDJGZ)
                {
                    case 1:pixFDJGZ.load("./img2/8.png");//14.jpg
                    break;
                }
                paintFDJGZ.drawPixmap(697,0,43,37,pixFDJGZ);
            }



            //flagRight = 1; //右转
            QPainter paintRight(this);
            QPixmap pixRight;
            if(flagRight)
            {
                countRight++;
                if (countRight>2)
                    countRight = 0;
                switch(countRight)
                {
                    case 1:pixRight.load("./img2/right.png");//14.jpg
                    break;
                }
                paintRight.drawPixmap(752,0,48,48,pixRight);
            }
}


camera::~camera()
{
    delete ui;
}
