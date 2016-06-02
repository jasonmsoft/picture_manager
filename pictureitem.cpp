#include "pictureitem.h"
#include <QPainter>
#include "utils.h"


PictureItem::PictureItem():
mX(0),mY(0),mWidth(0),mHeight(0),mImage(NULL)
{

}
PictureItem::~PictureItem(){
    if(mImage != NULL)
        delete mImage;
}

void PictureItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    Utils::log(LOG_CON, "paint item x%d y%d width %d height %d \n", mX, mY, mWidth, mHeight);
    painter->drawImage(mX, mY, *mImage, 0, 0, mWidth, mHeight);
}


QRectF PictureItem::boundingRect() const
{
    return QRectF(mX, mY, mWidth, mHeight);
}

void PictureItem::initImageSize()
{
    mWidth = mImage->width();
    mHeight = mImage->height();
}

void  PictureItem::loadImage(QString picPath)
{
    mImage = new QImage(picPath);
    initImageSize();
}
void PictureItem::setImage(QImage *image)
{
    mImage = image;
    initImageSize();
}

void  PictureItem::setPosition(int x, int y)
{
    mX = x;
    mY = y;
}

void  PictureItem::setSize(int width, int height)
{
    mWidth = width;
    mHeight = height;
    QImage img = mImage->scaled(mWidth, mHeight);
    delete mImage;
    mImage = new QImage(img);
}

