#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<QWidget>

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow(){delete timer;};

protected:
    void paintEvent(QPaintEvent *);

private:
    QTimer *timer;

};

#endif //MAINWINDOW_H
