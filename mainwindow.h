#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QGraphicsScene>

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
    void onAddPicText();

private:
    int mPrevWindowWidth;
    int mPrevWindowHeight;
    QVector<QGraphicsScene *> mPrevScenes;
    QGraphicsScene *mCurrentScene;
    QGraphicsScene *mScene;
protected:
    void showImage(QImage *image);
};

#endif // MAINWINDOW_H
