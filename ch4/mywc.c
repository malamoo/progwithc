/* Count the number of characters, words and lines in the input.
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
    int character, character_count, word_count, line_count;
    int in_a_word;

    character_count = word_count = line_count = 0;
    in_a_word = FALSE;

    printf("Enter text:\n");

    while ((character = getchar()) != EOF)
    {
        character_count++;

        /* treat whitespace and newline characters as word boundaries */
        if (character != ' ' && character != '\n')
        {
            in_a_word = TRUE;
        }
        else
        {
            if (in_a_word == TRUE)
            {
                in_a_word = FALSE;
                word_count++;
            }
        }

        if (character == '\n')
        {
            line_count++;
        }
    }

    printf("Chars: %7d\n", character_count);
    printf("Words: %7d\n", word_count);
    printf("Lines: %7d\n", line_count);

    return 0;
}
