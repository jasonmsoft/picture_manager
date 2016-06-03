#ifndef TEXTITEM_H
#define TEXTITEM_H

#include <QObject>
#include <QWidget>
#include <QGraphicsTextItem>

class TextItem : public QGraphicsTextItem
{
private:
    QString mText;
public:
    TextItem();
    virtual void	mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mousePressEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mouseReleaseEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event);
};

#endif // TEXTITEM_H
