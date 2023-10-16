#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileSystemModel>
#include <QLineEdit>
#include <QSortFilterProxyModel>
#include <QTreeView>
#include <QObject>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void searchItem();

private:
    Ui::MainWindow *ui;
    QFileSystemModel *model;
    QLineEdit *lineEdit;
    QSortFilterProxyModel *proxyModel;
    QTreeView *treeView;
};
#endif // MAINWINDOW_H
