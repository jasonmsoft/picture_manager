#include "hybirdscene.h"
#include "utils.h"
#include <QGraphicsSceneMouseEvent>

HybirdScene::HybirdScene(QObject * parent):QGraphicsScene(parent)
{

}


void	HybirdScene::keyPressEvent(QKeyEvent * keyEvent)
{
    Utils::log(LOG_CON, "keyPressEvent\n");
}

void	HybirdScene::keyReleaseEvent(QKeyEvent * keyEvent)
{
     Utils::log(LOG_CON, "keyReleaseEvent\n");
}

void	HybirdScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mouseDoubleClickEvent pos %f, %f\n", mouseEvent->scenePos().x(), mouseEvent->scenePos().y());
     TextItem *ti = new TextItem("");
     ti->setDefaultTextColor(Qt::red);
     ti->setTextInteractionFlags(Qt::TextEditorInteraction);
     ti->setZValue(1000.0);
     ti->setPos(mouseEvent->scenePos());
     addItem(ti);
     QGraphicsScene::mouseDoubleClickEvent(mouseEvent);

}

void	HybirdScene::mouseMoveEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mouseMoveEvent\n");
     QGraphicsScene::mouseMoveEvent(mouseEvent);
}

void	HybirdScene::mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mousePressEvent\n");
     QGraphicsScene::mousePressEvent(mouseEvent);
}

void	HybirdScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mouseReleaseEvent\n");
     QGraphicsScene::mouseReleaseEvent(mouseEvent);
}

void	HybirdScene::wheelEvent(QGraphicsSceneWheelEvent * wheelEvent)
{
     Utils::log(LOG_CON, "wheelEvent\n");
     QGraphicsScene::wheelEvent(wheelEvent);
}
