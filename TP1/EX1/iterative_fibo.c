#include "header.h"

int iterative_fibo(int n)
{
    int hs0 = 0, hs1 = 0, hsn = 0;
    for (int i = 0; i < n - 1; i++)
    {
        hsn = hs0 + hs1;
        hs0 = hs1;
        hs1 = hsn;
    }
    return hsn;
