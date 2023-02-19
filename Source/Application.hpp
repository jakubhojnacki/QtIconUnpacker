#pragma once

#include <QApplication>
#include <QObject>

#include "MainController.hpp"
#include "MainModel.hpp"
#include "MainWindow.hpp"

class Application : public QApplication
{
    Q_OBJECT

    public:
        explicit Application(int pArgC, char* pArgV[]);
        ~Application();

    private:
        MainModel* mMainModel { nullptr };
        MainController* mMainController { nullptr };
        MainWindow* mMainWindow { nullptr };

    public:
        void initUI();
};

