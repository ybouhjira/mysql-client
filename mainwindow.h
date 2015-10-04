#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>

class QTreeView;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private:
    QDockWidget* m_dbTreeViewDock;

    QTreeView* m_dbTreeView;

    QMap<QString, QMenu*> m_menus;

    QMap<QString, QAction*> m_actions;

    QMenuBar *m_menuBar;
};

#endif // MAINWINDOW_H
