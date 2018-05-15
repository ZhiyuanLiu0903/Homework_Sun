#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "House.h"
#include "Person.h"
#include <QTimer>
#include <QPen>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    timer=new QTimer(this);
    timer->start(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(rect(), QPixmap("://images/timg.jpeg"));
    QPen pen(Qt::red, 5,Qt::SolidLine,Qt::RoundCap);

    painter.setPen(pen);
    House house(&painter);

    pen.setColor(Qt::black);
    pen.setBrush(Qt::gray);
    painter.setPen(pen);
    Person person(&painter);
}
