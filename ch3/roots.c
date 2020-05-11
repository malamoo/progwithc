/* Calculate roots of the quadratic equation given the coefficients.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a, b, c;
    double d;
    double root;

    printf("Enter a, b and c: ");
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3)
    {
        printf("Required values not entered\n");
        exit(EXIT_FAILURE);
    }

    printf("When a = %.3f, b = %.3f and c = %.3f, ", a, b, c);

    /* calculate discriminant */
    d = b * b - 4 * a * c;

    if (a == 0)
    {
        /* equation is not quadratic */
        if (b == 0)
        {
            /* equation is constant and has no roots */
            printf("the equation has no roots\n");
        }
        else
        {
            /* equation is linear and has one real root */
            root = -c / b;
            printf("the equation has one real root, x = %.3f\n", root);
        }
    }
    else if (d == 0)
    {
        /* equation is quadratic and has a double root */
        root = -b / (2 * a);
        printf("the equation has a double root, x = %.3f\n", root);
    }
    else if (d < 0)
    {
        /* equation is quadratic and has two complex roots */
        double real_part, imaginary_part;
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-d) / (2 * a);
        printf("the equation has two complex roots, x = %.3f + %.3fi and x = %.3f - %.3fi\n",
               real_part, imaginary_part, real_part, imaginary_part);
    }
    else
    {
        /* equation is quadratic and has two real roots */
        root = (-b + sqrt(d)) / (2 * a);
        printf("the equation has two real roots, x = %.3f and ", root);
        root = (-b - sqrt(d)) / (2 * a);
        printf("x = %.3f\n", root);
    }

    return 0;
}