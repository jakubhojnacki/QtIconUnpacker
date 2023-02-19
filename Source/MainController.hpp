#pragma once

#include <QObject>

#include "MainModel.hpp"

class MainController : public QObject {
    Q_OBJECT

    public:
        MainController(QObject* pParent = nullptr);
        MainController(const MainModel* pModel, QObject* pParent = nullptr);

    private:
        const MainModel* mModel { };
};

