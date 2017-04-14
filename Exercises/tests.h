#ifndef TESTS_H
#define TESTS_H


class Tests
{
public:
    static void sayHeader(const char * header);
    static void sayFooter(const char *footer);


    /***************************************************
     *                  Chapter 1.1                    *
     ***************************************************/

    static void test_histogram__1_1_15();
    static void test_ln_N_factorial__1_1_20();
    static void test_bs_recursive_rank__1_1_22();
};

#endif // TESTS_H
