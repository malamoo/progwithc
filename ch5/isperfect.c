#include <stdio.h>

/* 
 * Return true if the number is perfect, and false
 * otherwise.
 */
int isperfect(int n)
{
        int d;
        int sum = 0;

        if (n == 1)
                return 0;

        for (d = 1; d * d <= n; d++) {
                if (n % d != 0)
                        continue;
                sum += d;
                if (n / d != n && n / d != d)
                        sum += n / d;
        }

        if (sum == n)
                return 1;

        return 0;
}
