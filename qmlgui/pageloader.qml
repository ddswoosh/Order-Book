import QtQuick 2.3

Item {
    id: rootPageLoader

    property bool loggedIn: false

    Loader {
        id: qmlLoader
        anchors.fill: parent
    }

    Component.onCompleted: {
        if (!loggedIn) {
            qmlLoader.source = "authentication/userauthentication.qml"
        }
    }
} 