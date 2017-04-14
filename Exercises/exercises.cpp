#include "exercises.h"
#include <algorithm>
#include <math.h>

std::vector<int> Exercises::histogram__1_1_15(std::vector<int> a, int M)
{
    std::vector<int> result(M , 0);

    std::sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); ++i)
    {
        if (i > M) { continue; }

        if (i == a[i])
        {
           ++result[i];
        }
    }

    return result;
}

double Exercises::ln_N_factorial__1_1_20(double nF, double precision)
{
    static double ln10 = 2.30258509;

    if (nF > 10)
    {
        return Exercises::ln_N_factorial__1_1_20(nF/10.0, precision) + ln10;
    }

    if (precision < 1) return 0;
    double step = pow(((nF - 1) / nF), precision) / precision;
    return Exercises::ln_N_factorial__1_1_20(nF, precision - 1) + step;
}


