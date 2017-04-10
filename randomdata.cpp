#include "randomdata.h"
#include <random>
#include <QDebug>


RandomData::RandomData()
{
}

VectorOfPairs RandomData::Generate(int count)
{
    std::random_device rd;
    VectorOfPairs randData;

    int i = 0;
    while (i < count)
    {
        int randNum = rd() % 100;
        std::pair<int, int> newPair(i, randNum);
        randData.push_back(newPair);

        qDebug() << i << " " << randNum;

        ++i;
    }

    return randData;
}
