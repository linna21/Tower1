#include "mywindow.h"
#include "mybutton.h"
#include "window1.h"
#include "tower.h"
#include <QPixmap>
#include <QPainter>
#include <QTimer>

Window1::Window1(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1250,550);
//返回按钮
    MyButton * rbtn=new MyButton(":/returnbtn.png");
    rbtn->setParent(this);
    rbtn->move(50,50);
    connect(rbtn,&QPushButton::clicked,this,[=](){
        rbtn->down();
        rbtn->up();
    });

    connect(rbtn,&MyButton::clicked,this,[=](){
        QTimer::singleShot(200,this,[=](){
            emit chooseBack(); //发送返回信号
        });
    });



}
void Window1::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/background1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);

}

