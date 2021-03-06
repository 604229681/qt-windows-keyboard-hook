#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <qt_windows.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyDown(DWORD key);
    void keyUp(DWORD key);

    static void pressKey(DWORD vkKeyCode);
private slots:
    void doMultimedia(DWORD vkKeyCode);
private:
    Ui::MainWindow *ui;
    HHOOK hhkLowLevelKybd;
    bool bWinKey;
};

#endif // MAINWINDOW_H
