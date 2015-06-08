
#include "bullet.h"
#include <QGraphicsScene>
Bullet::Bullet()
{
    setRect(0,0,10,30);
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Bullet::move()
{
    setPos(x(),y()-10);
    if(pos().y()<=0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
