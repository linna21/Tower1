#ifndef MYWINDOW2_H
#define MYWINDOW2_H
#include <QMainWindow>
#include "tower.h"
#include <QList>

class MyWindow2 : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow2(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);//重绘事件处理函数的声明:
    void set_tower();
private:
    QList<Tower*>tower_list;
signals:
     void chooseBack();

};

#endif // MYWINDOW2_H
