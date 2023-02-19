#include "MainController.hpp"

MainController::MainController(QObject* pParent) : QObject { pParent }, mModel { new MainModel { this } } {
}

MainController::MainController(const MainModel* pModel, QObject* pParent) : QObject { pParent }, mModel { pModel } {
}

/*TODO >>> Work it out
QObject::connect(this->mModel, &MainModel::inputChanged, this->ui->inputLineEdit, &QLineEdit::setText);
QObject::connect(this->mModel, &MainModel::outputChanged, this->ui->outputLineEdit, &QLineEdit::setText);
QObject::connect(this->mModel, &MainModel::distributionChanged, this->ui->distributionLineEdit, &QLineEdit::setText);

QObject::connect(this->ui->inputLineEdit, &QLineEdit::textEdited, this->mModel, &MainModel::setInput);
QObject::connect(this->ui->outputLineEdit, &QLineEdit::textEdited, this->mModel, &MainModel::setOutput);
QObject::connect(this->ui->distributionLineEdit, &QLineEdit::textEdited, this->mModel, &MainModel::setDistribution);
<<<*/
