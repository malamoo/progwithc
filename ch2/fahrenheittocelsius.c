#include <stdio.h>

int main(int argc, char *argv[])
{
    double degrees_f, degrees_c;

    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%lf", &degrees_f);

    printf("When temperature is %.2f degrees Fahrenheit, ", degrees_f);

    degrees_c = (degrees_f - 32.0) * 5.0 / 9.0;

    printf("temperature is %.2f degrees Celsius\n", degrees_c);

    return 0;
}