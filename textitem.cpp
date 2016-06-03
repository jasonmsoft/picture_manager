#include "textitem.h"
#include "utils.h"
#include <QPainter>

TextItem::TextItem()
{

}


void TextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
{
    if (textInteractionFlags() == Qt::NoTextInteraction)
        setTextInteractionFlags(Qt::TextEditorInteraction);
    QGraphicsTextItem::mouseDoubleClickEvent(event);
}




void	TextItem::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "mouseMoveEvent\n");
}

void	TextItem::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "mousePressEvent\n");
}

void	TextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "mousePressEvent\n");
}

