#include "Application.hpp"

Application::Application(int pArgC, char* pArgV[]) : QApplication { pArgC, pArgV } {
}

Application::~Application() {
    delete this->mMainWindow;
}

void Application::initUI() {
    this->mMainModel = new MainModel { this };
    this->mMainController = new MainController { this->mMainModel, this };
    this->mMainWindow = new MainWindow { this->mMainController };
    this->mMainWindow->show();
}
