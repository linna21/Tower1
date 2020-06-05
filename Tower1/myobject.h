#ifndef MYOBJECT_H
#define MYOBJECT_H

#include<QObject>
#include<QPropertyAnimation>
#include<QPoint>
#include<QPixmap>
#include<QPainter>
class MyObject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QPoint currentPos READ getCurrentPos WRITE setCurrentPos)//
public:
    MyObject(QPoint startPos,QPoint targetPos,QString filename);
    void draw(QPainter*painter);
    void move();
    QPoint getCurrentPos();//读取当前位置
    void setCurrentPos(QPoint pos);//改写当前位置
private:
    QPoint startPos;
    QPoint targetPos;
    QPoint currentPos;
    QPixmap pixmap;

signals:

};

#endif // MYOBJECT_H
