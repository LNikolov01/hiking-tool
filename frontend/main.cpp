#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Explicitly create and show the main window
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
