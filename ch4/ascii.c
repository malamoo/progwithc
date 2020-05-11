/* Generate a table of the printable ASCII chcaracter set.
*/
#include <stdio.h>

#define MIN_CHAR_CODE 32
#define MAX_CHAR_CODE 126
#define MAX_COLS 8

int main(int argc, char const *argv[])
{
    int i, char_code, cols;

    /* format table header */
    printf("%10s", " ");
    for (i = 0; i < 8; i++)
    {
        printf("%+4d", i);
    }
    printf("\n");

    printf("%10s", "+");
    for (i = 0; i < 8; i++)
    {
        printf("----");
    }
    printf("\n");

    /* print characters as rows of table */
    cols = 0;

    printf("%8d |", MIN_CHAR_CODE);
    for (char_code = MIN_CHAR_CODE; char_code <= MAX_CHAR_CODE; char_code++)
    {
        if (cols == MAX_COLS)
        {
            printf("\n");
            printf("%8d |", char_code);
            cols = 0;
        }
        printf("%4c", char_code);
        cols++;
    }
    printf("\n");

    return 0;
}
