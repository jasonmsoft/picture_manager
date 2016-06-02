#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QGraphicsScene>
#include <QButtonGroup>
#include "hybirdscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public slots:
    void onOpenFile();
    void onOpenPath();
    void buttonGroupClicked(int id);

private:
    int mPrevWindowWidth;
    int mPrevWindowHeight;
    QVector<QGraphicsScene *> mPrevScenes;
    HybirdScene *mCurrentScene;
    HybirdScene *mScene;
    QButtonGroup *mButtonGroup;
protected:
    void showImage(QImage *image);
    void addText(QString text);
    void createToolBox();
};

#endif // MAINWINDOW_H
