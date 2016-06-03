#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QTextStream>
#include "const.h"
#include "utils.h"
#include "pictureitem.h"
#include "textitem.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mCurrentScene(NULL)
{
    ui->setupUi(this);
    QAction *openAction = new QAction(QString::fromLocal8Bit(OPEN_FILE), this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(QString::fromLocal8Bit(OPEN_PIC_FILE));
    QMenu *openMenu = ui->menuBar->addMenu(QString::fromLocal8Bit(OPEN_FILE));
    openMenu->addAction(openAction);


    QAction *openPathAction = new QAction(QString::fromLocal8Bit(OPEN_FILE_PATH), this);
    openPathAction->setShortcut(QKeySequence(tr("Ctrl+p")));
    openPathAction->setStatusTip(QString::fromLocal8Bit(OPEN_FILE_PATH));
    QMenu *openPathMenu = ui->menuBar->addMenu(QString::fromLocal8Bit(OPEN_FILE_PATH));
    openPathMenu->addAction(openPathAction);

    mPrevWindowWidth = ui->gv_preview->width();
    mPrevWindowHeight = ui->gv_preview->height();
    mScene = new HybirdScene(this);
    //mScene->setSceneRect(QRectF(0, 0, 500, 500));
    ui->gv_preview->setScene(mScene);
    mCurrentScene = mScene;

    createToolBox();

    //associate with an event function
    connect(openAction, SIGNAL(triggered()), this, SLOT(onOpenFile()));
    connect(openPathAction, SIGNAL(triggered()), this, SLOT(onOpenPath()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOpenFile()
{

     QString path = QFileDialog::getOpenFileName(this,
                                                QString::fromLocal8Bit(OPEN_FILE),
                                                ".",
                                                tr("Image Files(*.bmp *.jpg *jpeg)"));
    if(!path.isEmpty()) {

        Utils::log(LOG_CON, "file path  : %s\n", path.toStdString().c_str());
        QImage *image = new QImage(path);
        showImage(image);
        ui->lb_path_view->setText(path);
    }
}



void MainWindow::showImage(QImage *image)
{
    PictureItem *item = new PictureItem(QPixmap::fromImage(*image), NULL);
    mScene->addItem(item);
    ui->gv_preview->setScene(mScene);
    mCurrentScene = mScene;
}


void MainWindow::addText(QString text)
{

}

void MainWindow::createToolBox()
{
    mButtonGroup = new QButtonGroup(this);
    mButtonGroup->setExclusive(false);
    connect(mButtonGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(buttonGroupClicked(int)));



}



void MainWindow::onOpenPath()
{

}


 void MainWindow::buttonGroupClicked(int id)
 {

 }
