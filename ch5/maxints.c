#include <stdio.h>

int max_2_ints(int n, int m);
int max_4_ints(int n, int m, int o, int p);

int main(int argc, char const *argv[])
{
    int n, m, o, p, max;

    printf("Enter four integers: ");
    while (scanf("%d %d %d %d", &n, &m, &o, &p) == 4)
    {
        max = max_4_ints(n, m, o, p);
        printf("n = %d, m = %d, o = %d, p = %d, ", n, m, o, p);
        printf("max(n, m, o, p) = %d\n", max);
        printf("Enter four integers: ");
    }

    return 0;
}

/* Return the larger of two integers.
*/
int max_2_ints(int n, int m)
{
    if (n >= m)
    {
        return n;
    }
    else
    {
        return m;
    }
}

/* Return the largest of four integers.
*/
int max_4_ints(int n, int m, int o, int p)
{
    return max_2_ints(max_2_ints(n, m), max_2_ints(o, p));
}