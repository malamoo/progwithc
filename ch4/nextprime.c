/* Calculate the next prime number after a given value.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, divisor, isprime;

    printf("Enter an integer value: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid value\n");
        exit(EXIT_FAILURE);
    }

    do
    {
        n++;
        isprime = 1;

        for (divisor = 2; divisor * divisor <= n; divisor++)
        {
            if (n % divisor == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
        {
            printf("The next prime is     : %d\n", n);
        }
    } while (isprime == 0);

    return 0;
}
