#ifndef PLOTTEST_H
#define PLOTTEST_H

#include <QtQuick/QQuickPaintedItem>
#include <QColor>
#include <QPoint>
#include <vector>


using VectorOfPairs = std::vector<std::pair<int, int>>;

class PlotTest: public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)

public:

    PlotTest(QQuickItem *parent = 0);

    QString name() const;
    void setName(const QString &name);

    VectorOfPairs points() const;
    void setPoints(const VectorOfPairs &newPoints);

    void paint(QPainter *painter);

private:
    QString m_name;
    VectorOfPairs m_points;

    void drawLine(QPainter *painter, QPoint &point1, QPoint &point2);
};

#endif // PLOTTEST_H
