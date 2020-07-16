#include <stdio.h>
#include <ctype.h>

int my_isupper(int c);
int my_tolower(int c);

#define MIN_UC 65
#define MAX_UC 90
#define LC_OFFSET 32

int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            continue;
        }

        printf("\n");

        printf("my_isupper(%c) = %d\n", c, my_isupper(c));
        printf("isupper(%c) = %d\n", c, isupper(c));

        printf("my_tolower(%c) = %c\n", c, my_tolower(c));
        printf("tolower(%c) = %c\n", c, tolower(c));
    }

    return 0;
}

/* Return true if the character is an upper case letter.
*/
int my_isupper(int c)
{
    return c >= MIN_UC && c <= MAX_UC;
}

/* Return lower case conversion of an upper case letter.
*/
int my_tolower(int c)
{
    if (my_isupper(c))
    {
        c += LC_OFFSET;
    }

    return c;
}