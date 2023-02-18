#include "MainWindow.hpp"

#include <QApplication>

int main(int pArgc, char* pArgv[]) {
    QApplication application { pArgc, pArgv };

    MainModel model { };
    MainWindow window { };

    mainWindow.show();

    MainController controller { model, window };

    return application.exec();
}
