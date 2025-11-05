#include <stdio.h>
#include <math.h>

// (a) macro for one-argument 
#define DISP(f, x) printf(#f "(%g) = %g\n", (x), f(x))

// (b) macro for two-argument 
#define DISP2(f, x, y) printf(#f "(%g, %g) = %g\n", (x), (y), f(x, y))

int main(void)
{
    DISP(sqrt, 3.0);          // one argument
    DISP2(pow, 2.0, 3.0);     // two arguments

    return 0;
}
