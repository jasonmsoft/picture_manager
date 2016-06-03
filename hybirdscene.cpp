#include "hybirdscene.h"
#include "utils.h"

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
     Utils::log(LOG_CON, "mouseDoubleClickEvent\n");
}

void	HybirdScene::mouseMoveEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mouseMoveEvent\n");
}

void	HybirdScene::mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mousePressEvent\n");
}

void	HybirdScene::mouseReleaseEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
     Utils::log(LOG_CON, "mouseReleaseEvent\n");
}

void	HybirdScene::wheelEvent(QGraphicsSceneWheelEvent * wheelEvent)
{
     Utils::log(LOG_CON, "wheelEvent\n");
}
