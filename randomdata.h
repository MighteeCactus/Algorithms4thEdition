#ifndef RANDOMDATA_H
#define RANDOMDATA_H

#include <vector>

using VectorOfPairs = std::vector<std::pair<int, int>>;

class RandomData
{
public:
    RandomData();

    static VectorOfPairs Generate(int count);

};

#endif // RANDOMDATA_H
