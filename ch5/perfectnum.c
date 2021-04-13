/*
 * Searches for and prints perfect numbers.
 */
#include <stdio.h>

int nextperfect(int n);

#define MAX_ITER 5

int main(int argc, char **argv)
{
        int i;
        int n = 0;

        printf("The first %d perfect numbers are:\n", MAX_ITER);

        for (i = 1; i <= MAX_ITER; i++) {
                if (i == MAX_ITER) {
                        printf("Warning: ");
                        printf("search for next perfect number is slow\n");
                }
                n = nextperfect(n);
                printf("%d\n", n);
        }

        return 0;
}
