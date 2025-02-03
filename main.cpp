// Header Inlcudes
#include "appdefines.h"
#include "cachereader.h"

// QT Includes
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <iostream>
int main(int argc, char** argv) {
    // SocketHandler& sock = SocketHandler::getInstance();
    
    // while (1) {
    //     char* tmp = sock.readSocket();

    //     for (int i = 0; i < sizeof(tmp) / sizeof(tmp[0]); ++i) {
    //         std::cout << tmp[i];
    //     }
    // }

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("main.qml"));
    engine.load(url);
    if (engine.rootObjects().isEmpty()) {
        qDebug() << "Failed to load QML file!";
        return -1;
    }

    qDebug() << "QML file loaded successfully.";
    return app.exec();
}
