#ifndef HYBIRDSCENE_H
#define HYBIRDSCENE_H
#include <QGraphicsScene>
#include "textitem.h"

class HybirdScene : public QGraphicsScene
{
public:
    HybirdScene(QObject * parent);
protected:
    virtual void	keyPressEvent(QKeyEvent * keyEvent);
    virtual void	keyReleaseEvent(QKeyEvent * keyEvent);
    virtual void	mouseDoubleClickEvent(QGraphicsSceneMouseEvent * mouseEvent);
    virtual void	mouseMoveEvent(QGraphicsSceneMouseEvent * mouseEvent);
    virtual void	mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent);
    virtual void	mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent);
    virtual void	wheelEvent(QGraphicsSceneWheelEvent * wheelEvent);
};

#endif // HYBIRDSCENE_H
