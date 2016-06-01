#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QTextStream>
#include "const.h"
#include "utils.h"
#include "pictureitem.h"

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
    mScene = new QGraphicsScene(this);
    ui->gv_preview->setScene(mScene);

    //associate with an event function
    connect(openAction, SIGNAL(triggered()), this, SLOT(onOpenFile()));
    connect(openPathAction, SIGNAL(triggered()), this, SLOT(onOpenPath()));
    connect(ui->btn_add_text, SIGNAL(clicked()), this, SLOT(onAddPicText()));






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
        //QImage scaledImage = image->scaled(mPrevWindowWidth, mPrevWindowHeight);
        //delete image;
        showImage(image);
        ui->lb_path_view->setText(path);
    }
}

void MainWindow::onAddPicText()
{
    Utils::log(LOG_CON, "add pic text\n");
    if(mCurrentScene == NULL )
    {
        Utils::showWarning(QString::fromLocal8Bit(MSG_TIP_ADD_PIC));
    }
    else
    {
        mCurrentScene->addText("11111");
    }

}

void MainWindow::showImage(QImage *image)
{
    //QGraphicsScene *prevScene = new QGraphicsScene(this);
    //mScene->addPixmap(QPixmap::fromImage(*image));
    PictureItem *item = new PictureItem();
    item->setImage(image);
    mScene->addItem(item);
    //ui->gv_preview->setScene(prevScene);
    //mPrevScenes.push_back(prevScene);
    mCurrentScene = mScene;
}



void MainWindow::onOpenPath()
{

}
