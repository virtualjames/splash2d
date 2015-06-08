#ifndef MYRECT
#define MYRECT
#include <QtEvents>
#include <QGraphicsRectItem>

class MyRect:public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent* myevent);
};

#endif // MYRECT

