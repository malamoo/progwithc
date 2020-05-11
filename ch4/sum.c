/* Read and sum a set of numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int number, sum, count;

    if (scanf("%d", &number) != 1)
    {
        printf("No numbers entered\n");
        exit(EXIT_FAILURE);
    }

    sum = number;
    count = 1;

    while (scanf("%d", &number) == 1)
    {
        sum += number;
        count += 1;
    }

    printf("The sum of the numbers is %d\n", sum);
    printf("The average of the numbers is %d\n", sum / count);

    return 0;
}
