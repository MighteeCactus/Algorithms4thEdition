#ifndef HELPERS_H
#define HELPERS_H

#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iostream>
#include <random>

class Helpers
{
public:
    template<typename T>
    static std::vector<T> numSeqence(T min, T max)
    {
        return Helpers::numSeqence(min, max, static_cast<T>(1));
    }
    template<typename T>
    static std::vector<T> numSeqence(T min, T max, T step)
    {
        int range = static_cast<int>(std::abs(max - min) / step);

        // including max
        std::vector<T> result(range + 1);

        T sum = min;
        for (int i = 0; i < range; ++i)
        {
            result[i] = sum;
            sum += step;
        }
        result[range] = max;

        return result;
    }

    template<typename T>
    static bool vectorsAreEqual(std::vector<T> v1, std::vector<T> v2)
    {
        if (v1.size() != v2.size()) { return false; }

        for (int i = 0; i < v1.size(); ++i)
        {
            if (v1[i] != v2[i]) { return false; }
        }

        return true;
    }


    template<typename T>
    static void printVector(std::vector<T> a, bool eachOnNewLine = false)
    {
        for (int i = 0; i < a.size(); ++i)
        {
            std::cout << a[i] << " ";
            if (eachOnNewLine) { std::cout << std::endl; }
        }
    }

    template<typename T>
    static void printValue(T val, bool eachOnNewLine = true)
    {
        std::cout << val << " ";
        if (eachOnNewLine) { std::cout << std::endl; }
    }

    template<typename T>
    static T factorial(T N)
    {
        T fact = 1;
        for (T i = 2; i <= N; i += 1)
        {
            fact *= i;
        }

        return fact;
    }

};

#endif // HELPERS_H
