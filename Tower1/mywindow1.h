#ifndef MYWINDOW1_H
#define MYWINDOW1_H
#include <QMainWindow>
#include "tower.h"
#include <QList>

class MyWindow1 : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyWindow1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);//重绘事件处理函数的声明:
    void set_tower();

private:
    QList<Tower*>tower_list;

signals:
    void chooseBack();




};
#endif // MYWINDOW1_H
