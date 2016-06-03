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
    TextItem(const QString & text);
    virtual void	mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mousePressEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mouseReleaseEvent(QGraphicsSceneMouseEvent * event);
    virtual void	mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event);

    QVariant itemChange(GraphicsItemChange change, const QVariant &value) Q_DECL_OVERRIDE;
    void focusOutEvent(QFocusEvent * event) Q_DECL_OVERRIDE;
};

#endif // TEXTITEM_H
