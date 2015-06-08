#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a scene
    QGraphicsScene * mygamescene = new QGraphicsScene();
    MyRect * player = new MyRect();
    player->setRect(0,0,50,50);
    mygamescene->addItem(player);
    // Make rect respond to events
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    QGraphicsView * myview = new QGraphicsView(mygamescene);
    myview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    myview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    myview->show();
    myview->setFixedSize(800,600);
    mygamescene->setSceneRect(0,0,800,600);
    player->setPos((myview->width()-player->rect().width())/2,myview->height()-player->rect().height());
    return a.exec();
}
