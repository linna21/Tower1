#ifndef WINDOW1_H
#define WINDOW1_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QList>
#include"tower.h"
#include"myobject.h"

class Window1 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);//重绘事件处理函数的声明
    void set_tower();
private:
    QList<Tower*>tower_list;
    QList<MyObject*>object_list;

signals:
     void chooseBack();

};

#endif // WINDOW1_H
