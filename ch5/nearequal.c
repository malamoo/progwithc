#include <stdio.h>
#include <math.h>

#define TOLERANCE_RATIO 0.0001

int near_equal(double x1, double x2);
double cube_root(double v);

int main(int argc, char const *argv[])
{
    double v, croot;

    printf("Enter value: ");
    while (scanf("%lf", &v) == 1)
    {
        croot = cube_root(v);
        printf("%16.9e, croot=%16.9e, ^3=%16.9e\n",
               v, croot, pow(croot, 3));

        printf("Enter value: ");
    }

    return 0;
}

/* Return true if the two argument values are either both exactly equal to 0, 
   or are within 0.01% of each other.
*/
int near_equal(double x1, double x2)
{
    double min_abs, min_tolerance, abs_diff;

    if (x1 == 0 && x2 == 0)
    {
        return 1;
    }

    min_abs = fabs(x1) < fabs(x2) ? fabs(x1) : fabs(x2);
    min_tolerance = min_abs * TOLERANCE_RATIO;
    abs_diff = fabs(x1 - x2);

    if (abs_diff <= min_tolerance)
    {
        return 1;
    }

    return 0;
}

/* Return an approximate cube root calculated by a converging iterative 
   mechanism.
*/
double cube_root(double v)
{
    double next = 1.0;

    while (!near_equal(pow(next, 3), v))
    {
        next = (2 * next + v / (next * next)) / 3;
    }

    return next;
}