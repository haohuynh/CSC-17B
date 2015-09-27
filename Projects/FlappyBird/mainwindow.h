#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /*The primary constructor of this window*/
    explicit MainWindow(QWidget *parent = 0);

    /*Main window destructor*/
    ~MainWindow();

private:

    /*Main UI*/
    Ui::MainWindow *ui;

    /*The fundamental graphics scene of the game*/
    MainScene *mainScene;

protected:
    /*This function waits for a key press event that belongs to the main window*/
    void keyPressEvent(QKeyEvent* event);

signals:
    /*This function is called when the Space Bar key was pressed*/
    void pressSpaceKey();

public slots:

    /*This function asks main scene to move flowers when the GUI thread is running*/
    void moveFlowers();

public:

    /*This function asks main scene to create new flowers when the GUI thread is running*/
    void createFlowers();

    /*This function asks main scene to start the game when the GUI thread is running*/
    void play();

};

#endif // MAINWINDOW_H
