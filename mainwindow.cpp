#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    proxyModel = new QSortFilterProxyModel(this);

    model -> setFilter(QDir::QDir::AllEntries);
    model -> setRootPath(QDir::homePath());

    proxyModel->setSourceModel(model);
    connect(ui -> lineEdit, &QLineEdit::textChanged, this, &MainWindow::searchItem);


    ui -> treeView -> setModel(proxyModel);


}

void MainWindow::searchItem() {
    proxyModel->setFilterRegExp(ui -> lineEdit->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}

