#include "Person.h"
#include <QPainter>
#include <QPaintEvent>

Person::Person(QPainter *mypainter)
{
    mypainter->drawEllipse(150,260,50,50);//头
    mypainter->drawRect(140,310,70,100);//身子

    mypainter->drawLine(140,330,120,375);
    mypainter->drawLine(210,330,230,375);//胳膊
    mypainter->drawLine(165,410,165,460);
    mypainter->drawLine(185,410,185,460);//腿
}
