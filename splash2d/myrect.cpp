#include "myrect.h"
#include <QDebug>
#include "bullet.h"
#include <QGraphicsScene>
void MyRect::keyPressEvent(QKeyEvent * myevent)
{
//qDebug()<<"my rect can get events\n";
    if(myevent->key() == Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(myevent->key() == Qt::Key_Right)
    {
        setPos(x()+10,y());
    }
    else if(myevent->key() == Qt::Key_Up)
    {
        setPos(x(),y()-10);
    }
    else if(myevent->key() == Qt::Key_Down)
    {
        setPos(x(),y()+10);
    }
    else if(myevent->key() == Qt::Key_Space)
    {
        Bullet * b = new Bullet();
        b->setPos(x(),y());
        scene()->addItem(b);
        qDebug()<<"bullet created";
    }

}
