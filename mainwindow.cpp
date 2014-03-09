#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ResizeBlocker.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(addToStatusBar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addToStatusBar()
{
    ResizeBlocker doNotResizeHere(this);
    ui->statusBar->addWidget(new QLabel("A Label"));
}
