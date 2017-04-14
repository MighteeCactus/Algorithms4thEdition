#include "tests.h"
#include <assert.h>
#include <vector>
#include "exercises.h"
#include "helpers.h"
#include "binarysearch.h"

using namespace std;

void Tests::sayHeader(const char *header)
{
    std::cout << std::endl << std::endl << "-->> " << header << " tests:" <<  std::endl << std::endl;
}

void Tests::sayFooter(const char *footer)
{
    std::cout << std::endl << std::endl << "-->> end of " << footer << std::endl << std::endl;
}


/***************************************************
 *                  Chapter 1.1                    *
 ***************************************************/

void Tests::test_histogram__1_1_15()
{
    Tests::sayHeader("histogram__1_1_15 tests");

    int M = 10;
    std::vector<int> arr = Helpers::numSeqence(0, M - 1);

    std::vector<int> res = Exercises::histogram__1_1_15(arr, 10);

    std::vector<int> all1(M, 1);

    assert(Helpers::vectorsAreEqual(all1, res));

    Helpers::printVector(res);

    Tests::sayFooter("histogram__1_1_15 tests");
}


void Tests::test_ln_N_factorial__1_1_20()
{
    Tests::sayHeader("ln_N_factorial__1_1_20 tests");

    for (int i = 10; i < 50; ++i)
    {
        int base = i;
        double result = Exercises::ln_N_factorial__1_1_20( Helpers::factorial(base), 100.0 );
        std::cout << "Result for " << base << " is " << result << std::endl;
    }

    Tests::sayFooter("ln_N_factorial__1_1_20 tests");
}

void Tests::test_bs_recursive_rank__1_1_22()
{
    Tests::sayHeader("bs_recursive_rank__1_1_22");


    BinarySearch bs;

    std::vector<int> arr = Helpers::numSeqence(0, 10);

    Helpers::printValue(bs.search(arr, 0, arr.size()));

    Tests::sayFooter("bs_recursive_rank__1_1_22");
}


