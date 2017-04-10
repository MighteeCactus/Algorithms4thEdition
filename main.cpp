#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "plottest.h"
#include <vector>
#include "randomdata.h"


using VectorOfPairs = std::vector<std::pair<int, int>>;

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<PlotTest>("MyTestName", 1, 0, "PlotTest");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));


    QObject *rootObject = engine.rootObjects().first();
//    QObject *qmlObject = rootObject->findChild<QObject*>("PlotTest");
    PlotTest *plotTest = rootObject->findChild<PlotTest*>("plot_test");

    VectorOfPairs points = RandomData::Generate(10);
    plotTest->setPoints(points);




    return app.exec();
}
