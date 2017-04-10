#include "plottest.h"
#include <QPainter>

PlotTest::PlotTest(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
}

QString PlotTest::name() const
{
    return m_name;
}

void PlotTest::setName(const QString &name)
{
    m_name = name;
}

VectorOfPairs PlotTest::points() const
{
    return m_points;
}

void PlotTest::setPoints(const VectorOfPairs &newPoints)
{
    m_points = VectorOfPairs(newPoints);
    update();
}


void PlotTest::paint(QPainter *painter)
{
    QColor color(1.0,0.0, 1.0);
    QPen pen(color, 2);

    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);

    painter->drawRect(QRect(0, 0, this->width(), this->height()));

    int hInterval = width() / m_points.size();


    for (int i = 0; i < m_points.size(); ++i)
    {
        QPoint point1(m_points[i].first * hInterval, 0);
        QPoint point2(m_points[i].first * hInterval, m_points[i].second);
        drawLine(painter, point1, point2);
    }
}


void PlotTest::drawLine(QPainter *painter, QPoint &point1, QPoint &point2)
{
    point1.setY(this->height() - point1.y());
    point2.setY(this->height() - point2.y());
    painter->drawLine(point1, point2);
}
