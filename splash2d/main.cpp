#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create a scene
    QGraphicsScene * mygamescene = new QGraphicsScene();
    QGraphicsRectItem * myrect = new QGraphicsRectItem();
    myrect->setRect(50,50,50,50);
    mygamescene->addItem(myrect);
    QGraphicsView * myview = new QGraphicsView(mygamescene);
    myview->show();
    return a.exec();
}
