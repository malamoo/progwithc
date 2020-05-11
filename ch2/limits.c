#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("INT_MAX = %d\n", INT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("FLT_MIN  = %.64f\n", FLT_MIN);
    printf("FLT_MAX  = %.64f\n", FLT_MAX);
    printf("DBL_MIN  = %.64f\n", DBL_MIN);
    printf("DBL_MAX  = %.64f\n", DBL_MAX);

    return 0;
}