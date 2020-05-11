#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum;  /* the running sum */
    int next; /* the next value to be added */

    sum = 0;

    /* get the numbers one by one */
    while (scanf("%d", &next) == 1)
    {
        sum = sum + next;
    }

    /* and print their sum */
    printf("The sum of the numbers is %d\n", sum);
    return 0;
}
