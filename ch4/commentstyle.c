/* Replace each C99-style comment in the input text with an equivalent
ANSI C comment. 
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ch, chnext, incomment = 0, inc99comment = 0;

    ch = getchar();

    while (ch != EOF)
    {
        chnext = getchar();

        if (incomment)
        {
            /* handle ANSI C comment termination */
            if (ch == '*' && chnext == '/')
            {
                incomment = 0;
                putchar(ch);
                putchar(chnext);
                chnext = getchar();
            }
            else
            {
                putchar(ch);
            }
        }
        else if (inc99comment)
        {
            /* handle C99-style comment termination */
            if (ch == '\n')
            {
                inc99comment = 0;
                putchar('*');
                putchar('/');
                putchar(ch);
            }
            /* remove ANSI C comment syntax within C99-style comment */
            else if ((ch == '/' && chnext == '*') ||
                     (ch == '*' && chnext == '/'))
            {
                chnext = getchar();
            }
            else
            {
                putchar(ch);
            }
        }
        else
        {
            /* flag entry into C99-style comment */
            if (ch == '/' && chnext == '/')
            {
                inc99comment = 1;
                putchar(ch);
                putchar('*');
                chnext = getchar();
            }
            /* flag entry into ANSI C comment */
            else if (ch == '/' && chnext == '*')
            {
                incomment = 1;
                putchar(ch);
                putchar(chnext);
                chnext = getchar();
            }
            else
            {
                putchar(ch);
            }
        }

        ch = chnext;
    }

    return 0;
}
