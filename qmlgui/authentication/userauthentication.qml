import QtQuick 2.3
import QtQuick.Controls 2.3

Item {
    id: rootUserAuthentication
    anchors.fill: parent

    Rectangle {
        width: parent.width / 4
        height: parent.height
        color: "#BB1f204a"
        
        Image {
            id: btcLogo
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.topMargin: 10
            anchors.leftMargin: 15
            width: 50
            height: 50
            source: "../assets/bitcoin.svg"
            sourceSize: Qt.size(width, height)
        }

        Text {
            anchors.left: btcLogo.right
            anchors.top: parent.top
            anchors.leftMargin: 10
            anchors.topMargin: 20
            font.pixelSize: 25
            font.bold: true
            text: "ORDER BOOK"
            color: "white"
        }

        Rectangle {
            id: seperator
            height: 2
            width: parent.width - 40
            anchors.top: btcLogo.bottom
            anchors.topMargin: 10
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Rectangle {
            id: exitButton
            anchors.bottom: parent.bottom
            width: parent.width
            height: 50
            color: "#55010112"

            Text {
                anchors.centerIn: parent
                font.pixelSize: 15
                text: "Exit"
                color: "#c5c5d4"
            }
            
            MouseArea {
                anchors.fill: parent
                
                onPressed: {
                    parent.color = "grey"
                }

                onReleased: {
                    parent.color = "#55010112"
                }

                onClicked: {
                    applicationobject.exitApp()
                }
            }
        }

        Rectangle {
            id: loginButton
            anchors.top: seperator.bottom
            anchors.topMargin: 15
            width: parent.width
            height: 50
            color: "#55010112"

            MouseArea {
                anchors.fill: parent
                
                onPressed: {
                    parent.color = "grey"
                }

                onReleased: {
                    parent.color = "#55010112"
                }

                onClicked: {
                    qmlLoader.source = "userlogin.qml"
                }
            }

            Text {
                anchors.centerIn: parent
                font.pixelSize: 15
                text: "Login"
                color: "#c5c5d4"
            }
        }

        Rectangle {
            id: registerButton
            anchors.top: loginButton.bottom
            anchors.topMargin: 5
            width: parent.width
            height: 50
            color: "#55010112"

            Text {
                anchors.centerIn: parent
                font.pixelSize: 15
                text: "Register"
                color: "#c5c5d4"
            }

             MouseArea {
                anchors.fill: parent
                
                onPressed: {
                    parent.color = "grey"
                }

                onReleased: {
                    parent.color = "#55010112"
                }
                
                onClicked: {
                    qmlLoader.source = "userregister.qml"
                }
            }
        }
    }
}