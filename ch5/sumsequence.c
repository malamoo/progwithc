#include <stdio.h>

double sum_sequence (int n);

/*
 * Calculates and returns the sum
 * 1 / 1 + (1 + 2) / (1 * 2) +
 * (1 + 2 + 3) / (1 * 2 * 3) + ... +
 * (1 + 2 + ... + n) / n!,
 * where n is a positive integer.
 */
double
sum_sequence (int n)
{
        int i;
        double numer = 0;
        double denom = 1;
        double sum = 0;

        if (n < 1)
                return sum;

        for (i = 1; i <= n; i++) {
                numer += i;
                denom *= i;
                sum += numer / denom;
        }

        return sum;
}

int
main (int argc, char **argv)
{
        int n;
        double sum;

        printf ("Enter a positive integer: ");
        while (scanf ("%d", &n) == 1) {
                sum = sum_sequence (n);
                printf ("sum_sequence(%d) = %lf\n", n, sum);
                printf ("Enter a positive integer: ");
        }

        return 0;
}
