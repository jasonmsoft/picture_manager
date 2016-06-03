#include "textitem.h"
#include "utils.h"
#include <QPainter>

TextItem::TextItem(const QString & text):QGraphicsTextItem(text)
{
    QGraphicsItem::setEnabled(true);
    setFlag(QGraphicsItem::ItemIsMovable);
    setFlag(QGraphicsItem::ItemIsSelectable);
    setFlag(QGraphicsItem::ItemIsFocusable);
    Utils::log(LOG_CON, "text flags; 0x%x  %d\n", flags(), isEnabled());
}


void TextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
{
    if (textInteractionFlags() == Qt::NoTextInteraction)
        setTextInteractionFlags(Qt::TextEditorInteraction);
    QGraphicsTextItem::mouseDoubleClickEvent(event);
}


QVariant TextItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    if (change == QGraphicsItem::ItemSelectedHasChanged)
    {
        Utils::log(LOG_CON, "item change");
    }
        //emit selectedChange(this);
    return value;
}




void	TextItem::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "TextItem mouseMoveEvent\n");
    QGraphicsTextItem::mouseMoveEvent(event);
}

void	TextItem::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "TextItem mousePressEvent\n");
    setFocus();
    setCursor(Qt::ClosedHandCursor);
    QGraphicsTextItem::mousePressEvent(event);
}

void	TextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
{
    Utils::log(LOG_CON, "TextItem mousePressEvent\n");
    QGraphicsTextItem::mouseReleaseEvent(event);
}

