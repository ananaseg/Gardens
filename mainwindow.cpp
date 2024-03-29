#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UI/qmainglwidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainGLWidget *main = new QMainGLWidget();
    setCentralWidget(main);
}

MainWindow::~MainWindow()
{
    delete ui;
}
