#pragma once

#include <QObject>

#include "MainModel.hpp"
#include "MainWindow.hpp"

class MainController : public QObject {
    Q_OBJECT

    public:
        MainController(const MainModel& pModel, const MainWindow& pWindow);

    private:
        MainModel mModel { };
        MainWindow mWindow { };
};

