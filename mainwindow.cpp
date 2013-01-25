#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtOpenGL/QGLWidget"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGLWidget *main = new QGLWidget();
    setCentralWidget(main);
}

MainWindow::~MainWindow()
{
    delete ui;
}
