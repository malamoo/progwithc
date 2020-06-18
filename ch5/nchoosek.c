#include <stdio.h>

int n_choose_k(int n, int k);
int fact(int n);

int main(int argc, char const *argv[])
{
    int n, k, kcom;

    printf("Enter values: ");
    while (scanf("%d %d", &n, &k) == 2)
    {
        kcom = n_choose_k(n, k);
        printf("%d choose %d = %d\n", n, k, kcom);
        printf("Enter values: ");
    }

    return 0;
}

/* Return a k-combination.
*/
int n_choose_k(int n, int k)
{
    if (k > n)
    {
        return 0;
    }

    return fact(n) / (fact(n - k) * fact(k));
}

/* Return a factorial.
*/
int fact(int n)
{
    int i, prod = 1;

    if (n == 0)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        prod *= n - i;
    }

    return prod;
}