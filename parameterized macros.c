// Paramterized Macros
// This program defines and tests three parameterized macros.
// Blake Williford 
// C Programming Language 
// 1Nov2025

#include <stdio.h>

// (a)check(x, y, n)
#define CHECK(x, y, n) (((x) >= 0 && (x) <= (n) - 1 && (y) >= 0 && (y) <= (n) - 1) ? 1 : 0)

// (b)median(x, y, z)
#define MEDIAN(x, y, z) (((x) > (y)) ? \
                        ((x) < (z) ? (x) : ((y) > (z) ? (y) : (z))) : \
                        ((y) < (z) ? (y) : ((x) > (z) ? (x) : (z))))

// (c)polynomial(x)
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) - 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)

int main(void) {
    int a = 2, b = 3, n = 5;

    printf("CHECK(%d, %d, %d) = %d\n", a, b, n, CHECK(a, b, n));
    printf("MEDIAN(3, 7, 5) = %d\n", MEDIAN(3, 7, 5));
    printf("POLYNOMIAL(2) = %d\n", POLYNOMIAL(2));

    return 0;
}
