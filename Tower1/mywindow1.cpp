#include "mywindow1.h"
#include "mybutton.h"
#include <QPixmap>
#include <QPainter>
#include <QTimer>

MyWindow1::MyWindow1(QWidget *parent) : QMainWindow(parent)
{







     //按按钮，发塔
     //   MyButton *setTower = new MyButton(":/returnbtn.png");//1
     //   setTower->setParent(this);
     // setTower->move(500,500);
     //   connect(setTower,&MyButton::clicked,this,&MyWindow::set_tower);//



}


void MyWindow1::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/choose1.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);

}

