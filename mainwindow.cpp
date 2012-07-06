#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("hello");
    setWindowTitle("hello1");
    setWindowTitle("hello2");
    setWindowTitle("hello3");
    setWindowTitle("hello");
    setWindowTitle("hello1");
    setWindowTitle("hello2");
    setWindowTitle("hello3");
    setWindowTitle("hello");
    setWindowTitle("hello1");
    setWindowTitle("hello2");
    setWindowTitle("hello3");
    setWindowTitle("hello");
    setWindowTitle("hello1");
    setWindowTitle("hello2");
    setWindowTitle("hello3");
}

MainWindow::~MainWindow()
{
    delete ui;
}
