#include "mywindow2.h"
#include "mybutton.h"
#include <QPixmap>
#include <QPainter>
#include <QTimer>


MyWindow2::MyWindow2(QWidget *parent) : QMainWindow(parent)
{

}

 void MyWindow2::paintEvent(QPaintEvent *){
        QPainter painter(this);
        QPixmap pixmap(":/choose2.png");
        painter.drawPixmap(0,0,this->width(),this->height(),pixmap);

 }
