#include "pictureitem.h"
#include <QPainter>
#include "utils.h"


PictureItem::PictureItem(const QPixmap & pixmap, QGraphicsItem * parent )
:QGraphicsPixmapItem(pixmap, parent)
{
    setFlags(QGraphicsItem::ItemIsMovable|QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsFocusable);
}
PictureItem::~PictureItem(){

}


void PictureItem::initImageSize()
{

}






