#include "MainWindow.hpp"

#include <QApplication>

int main(int pArgc, char* pArgv[]) {
    QApplication application(pArgc, pArgv);
    MainWindow mainWindow;
    mainWindow.show();
    return application.exec();
}
