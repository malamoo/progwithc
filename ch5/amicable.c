/* Search for and print numbers that are amicable pairs. */
#include <stdio.h>

int sum_proper_divisors(int n);

/* Return the sum of an integer's proper divisors. */
int sum_proper_divisors(int n)
{
        int d;
        int sum = 0;

        if (n == 1)
                return sum;

        for (d = 1; d * d <= n; d++) {
                if (n % d != 0)
                        continue;
                sum += d;
                if (n / d != n && n / d != d)
                        sum += n / d;
        }

        return sum;
}

int main(int argc, char const **argv)
{
        int n;
        int sum;

        printf("Amicable pairs: \n");

        for (n = 1;; n++) {
                sum = sum_proper_divisors(n);
                if (sum_proper_divisors(sum) == n)
                        printf("(%d, %d)\n", n, sum);
        }

        return 0;
}
