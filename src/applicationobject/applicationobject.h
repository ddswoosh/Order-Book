#ifndef APPLICATIONOBJECT_H
#define APPLICATIONOBJECT_H

// QT Includes
#include <QObject>

class ApplicationObject : public QObject {
    Q_OBJECT

    private:
        explicit ApplicationObject(QObject* parent = nullptr) : QObject(parent) {}
        ~ApplicationObject() override {}
    
    public:
        static ApplicationObject& getInstance() {
            static ApplicationObject object;
            return object;
        }

        Q_INVOKABLE void exitApp();
};


#endif