// Header Inlcudes
#include "appdefines.h"
#include "cachereader.h"
#include "applicationobject.h"

// QT Includes
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

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
    engine.rootContext()->setContextProperty("applicationobject", &ApplicationObject::getInstance());

    const QUrl url(QStringLiteral("main.qml"));
    engine.load(url);
    
    return app.exec();
}
