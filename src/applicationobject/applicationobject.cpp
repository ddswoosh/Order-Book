// Header Includes
#include "applicationobject.h"

// QT Includes
#include <QCoreApplication>

void ApplicationObject::exitApp() {
    QCoreApplication::exit();
}