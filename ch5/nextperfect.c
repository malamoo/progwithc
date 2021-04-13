#include <stdio.h>

int isperfect(int n);

/* 
 * Return the next perfect number greater than
 * some number.
 */
int nextperfect(int n)
{
        while (1) {
                if (isperfect(++n))
                        return n;
        }
}
