#include "mainwindow.h"

#include <QDockWidget>
#include <QTreeView>
#include <QMenu>
#include <QMenuBar>
#include <QAction>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , m_dbTreeViewDock(new QDockWidget("Databases"))
    , m_dbTreeView(new QTreeView)
    , m_menuBar(new QMenuBar)
{
    // setup menus
    m_menus["file"] = new QMenu("File");
    m_menus["edit"] = new QMenu("Edit");
    m_menus["help"] = new QMenu("Help");

    m_menus["file"]->addAction("Open SQL file");
    m_menus["file"]->addSeparator();
    m_menus["file"]->addAction("Quit");

    // add actions
    m_menus["edit"]->addAction("Settings");

    m_menus["help"]->addAction("About");

    m_menuBar->addMenu(m_menus["file"]);
    m_menuBar->addMenu(m_menus["edit"]);
    m_menuBar->addMenu(m_menus["help"]);

    // setup docks
    m_dbTreeViewDock->setWidget(m_dbTreeView);

    // add to QMainWindow
    setMenuBar(m_menuBar);
    addDockWidget(Qt::LeftDockWidgetArea, m_dbTreeViewDock);
}

