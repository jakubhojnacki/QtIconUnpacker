#include "Application.hpp"

int main(int pArgc, char* pArgv[]) {
    Application application { pArgc, pArgv };
    application.initUI(); //TODO >>> Do we need it here? Can we move it to the constructor?
    return application.exec();
}
