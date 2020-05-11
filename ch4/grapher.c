/* Read a sequence of integers and draw a simple graph.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;

    printf("Enter numbers: ");

    while (scanf("%d", &n) == 1)
    {
        printf("%d  |", n);
        for (i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
