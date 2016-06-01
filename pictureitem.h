#ifndef PICTUREITEM_H
#define PICTUREITEM_H

#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QImage>
class PictureItem : public QGraphicsPixmapItem
{
public:
    PictureItem();
    ~PictureItem();
    virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option,
     QWidget * widget = 0);
    virtual QRectF boundingRect() const;
    void loadImage(QString picPath);
    void setImage(QImage *image);
    void setPosition(int x, int y);
    void setSize(int width, int height);
protected:
    void initImageSize();
private:
    int mX;
    int mY;
    int mWidth;
    int mHeight;
    QImage *mImage;

};

#endif // PICTUREITEM_H
