#include "MainWindow.hpp"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* pParent) : QMainWindow(pParent), ui(new Ui::MainWindow), mController { new MainController { this } } {
    this->ui->setupUi(this);
}

MainWindow::MainWindow(const MainController* pController, QWidget* pParent) : QMainWindow(pParent), ui(new Ui::MainWindow), mController { pController } {
    this->ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete this->ui;
}
