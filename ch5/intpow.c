#include <stdio.h>
#include <stdlib.h>

int int_pow(int x, int y);

int main(int argc, char const *argv[])
{
    int base, exp, pow;

    printf("Enter values: ");
    while (scanf("%d %d", &base, &exp) == 2)
    {
        pow = int_pow(base, exp);
        printf("%d^%d = %d\n",
               base, exp, pow);
        printf("Enter values: ");
    }

    return 0;
}

/* Return an integer exponentiation where 
   the exponent must be positive.
*/
int int_pow(int base, int exp)
{
    int i, pow = base;

    if (exp < 0)
    {
        printf("Error: exponent must be positive\n");
        exit(EXIT_FAILURE);
    }

    for (i = 2; i <= exp; i++)
    {
        pow *= base;
    }

    return pow;
}