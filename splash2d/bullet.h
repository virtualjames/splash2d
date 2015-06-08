#ifndef BULLET
#define BULLET

#include <QGraphicsRectItem>
#include <QTimer>
#include <QObject>

class Bullet: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public :
    Bullet();
public slots:
    void move();

};

#endif // BULLET

