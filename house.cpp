#include "House.h"
#include <QPainter>
#include <QPaintEvent>

House::House(QPainter *mypainter)
{
    mypainter->drawRect(400,280,230,180);//房子的墙
    mypainter->drawLine(380,280,650,280);
    mypainter->drawLine(380,280,515,170);
    mypainter->drawLine(515,170,650,280);//屋顶
    mypainter->drawRect(515,370,60,90);//门
    mypainter->drawRect(430,310,40,40);
    mypainter->drawLine(450,310,450,350);
    mypainter->drawLine(430,330,470,330);//窗户

}

