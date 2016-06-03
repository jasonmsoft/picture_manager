#ifndef PICTUREITEM_H
#define PICTUREITEM_H

#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QImage>
class PictureItem : public QGraphicsPixmapItem
{
public:
    PictureItem(const QPixmap & pixmap, QGraphicsItem * parent );
    ~PictureItem();


protected:
    void initImageSize();
private:


};

#endif // PICTUREITEM_H
