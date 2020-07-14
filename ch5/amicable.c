/* Search for and print numbers that are amicable pairs.
*/
#include <stdio.h>

int isamicable(int n, int m);
int sum_proper_divisors(int n);

int main(int argc, char const *argv[])
{
    int n, s;

    for (n = 1;; n++)
    {
        s = sum_proper_divisors(n);

        if (s <= n)
        {
            continue;
        }

        if (sum_proper_divisors(s) == n)
        {
            printf("%d, %d\n", n, s);
        }
    }

    return 0;
}

/* Return true if two numbers are amicable.
*/
int isamicable(int n, int m)
{
    if (n == m)
    {
        return 0;
    }

    return sum_proper_divisors(n) == m &&
           sum_proper_divisors(m) == n;
}

/* Return the sum of an integer's proper divisors.
*/
int sum_proper_divisors(int n)
{
    int d, sum = 0;

    if (n == 1)
    {
        return sum;
    }

    for (d = 1; d * d <= n; d++)
    {
        if (n % d != 0)
        {
            continue;
        }

        sum += d;
        if (d != 1 && (d * d != n))
        {
            sum += n / d;
        }
    }

    return sum;
}
