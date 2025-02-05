import QtQuick 2.3
import QtQuick.Window 2.3
import QtGraphicalEffects 1.0

Window {
    id: rootMain
    width: 1024
    height: 576
    title: "ddswoosh's Order Book"
    visible: true

    Rectangle {
        anchors.fill: parent

        LinearGradient {
            anchors.fill: parent

            gradient: Gradient {
                GradientStop { position: 0; color: "#010112" }
                GradientStop { position: 0.5; color: "#1e1e3b" }
                GradientStop { position: 1; color: "#222326" }
            }
        }
    }

    Loader {
        id: mainLoader
        anchors.fill: parent
    }

    Component.onCompleted: {
        mainLoader.source = "qmlgui/pageloader.qml"
    }
}