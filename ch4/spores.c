/* Calculate the Fibonacci sequence to model the growth of mould spores.
*/

#include <stdio.h>

#define MAX_SPORES 10000000

int main(int argc, char const *argv[])
{
    int n, fn_1, fn_2, fn;

    fn = fn_1 = fn_2 = 0;

    for (n = 1; fn <= MAX_SPORES; n++)
    {
        if (n == 1 || n == 2)
        {
            fn = 1;
        }
        else
        {
            fn = fn_1 + fn_2;
        }

        printf("Number of spores present at end of day %d: %d\n",
               n, fn);

        fn_2 = fn_1;
        fn_1 = fn;
    }

    return 0;
}
