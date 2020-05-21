/* Strip out ANSI C comments from input file.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ch, chnext, incomment = 0;

    ch = getchar();

    while (ch != EOF)
    {
        chnext = getchar();

        if (incomment)
        {
            if (ch == '*' && chnext == '/')
            {
                incomment = 0;
                chnext = getchar();
            }
        }
        else
        {
            if (ch == '/' && chnext == '*')
            {
                incomment = 1;
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
