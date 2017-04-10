import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import MyTestName 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Algorithms 4th edition. Bykov A.")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1
        {
            PlotTest
            {
                id: myPlot
                objectName: "plot_test"
                anchors.centerIn: parent
                width: 200; height: 200
                name: "Test plot"
            }
        }

//        Page {
//            Label {
//                text: qsTr("Second page")
//                anchors.centerIn: parent
//            }
//        }
    }

//    footer: TabBar {
//        id: tabBar
//        currentIndex: swipeView.currentIndex
//        TabButton {
//            text: qsTr("First")
//        }
//        TabButton {
//            text: qsTr("Second")
//        }
//    }
}
