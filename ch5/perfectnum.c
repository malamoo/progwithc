/* Searches for and prints perfect numbers.
*/

#include <stdio.h>

int isperfect(int n);
int nextperfect(int n);

#define PERF_ITERATIONS 5

int main(int argc, char const *argv[])
{
    int i, n = 0;

    printf("The first %d perfect numbers are:\n", PERF_ITERATIONS);
    for (i = 1; i <= PERF_ITERATIONS; i++)
    {
        if (i == PERF_ITERATIONS)
        {
            printf("Warning: search for next perfect number is slow\n");
        }

        n = nextperfect(n);
        printf("%d\n", n);
    }

    return 0;
}

/* Return true if the number is perfect,
   and false otherwise.
*/
int isperfect(int n)
{
    int d, sum = 1;

    if (n == 1)
    {
        return 0;
    }

    for (d = 2; d * d <= n; d++)
    {
        if (n % d != 0)
        {
            continue;
        }

        sum += d;
        if (d * d < n)
        {
            sum += n / d;
        }
    }

    if (sum == n)
    {
        return 1;
    }

    return 0;
}

/* Return the next perfect number greater
   than some number.
*/
int nextperfect(int n)
{
    int next = n + 1;

    while (1)
    {
        if (isperfect(next))
        {
            return next;
        }

        next++;
    }
}