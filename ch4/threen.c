/* Generate the sequences defined by the 3n + 1 problem using a range of 
starting values from 1 to some maximum. Report the length of the longest 
generated sequence, its maximum value and its starting value.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, max_starting_value, n, n_max;
    int cycles_max, cycles_max_starting_value, cycles_max_n, cycles;

    printf("Enter max starting value: ");
    if (scanf("%d", &max_starting_value) != 1)
    {
        printf("Invalid max starting value\n");
        exit(EXIT_FAILURE);
    }
    printf("When 1 <= n <= %d, ", max_starting_value);

    cycles_max = 0;
    cycles_max_starting_value = 1;
    cycles_max_n = 1;

    for (i = 1; i <= max_starting_value; i++)
    {
        n = i;
        cycles = 0;
        n_max = i;

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }

            if (n > n_max)
            {
                n_max = n;
            }

            cycles += 1;
        }

        if (cycles > cycles_max)
        {
            cycles_max = cycles;
            cycles_max_starting_value = i;
            cycles_max_n = n_max;
        }
    }

    printf("max sequence length is %d with max value %d, for n = %d\n",
           cycles_max, cycles_max_n, cycles_max_starting_value);

    return 0;
}
