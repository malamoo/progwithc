#include <stdio.h>
#include <stdlib.h>

#define FAHRENHEIT 'F'
#define CELSIUS 'C'
#define MILES 'M'
#define KILOMETERS 'K'
#define POUNDS 'P'
#define KILOGRAMS 'G'

int main(int argc, char *argv[])
{
    double quantity, quantity_converted;
    char units;

    printf("Enter a quantity: ");
    if (scanf("%lf%c", &quantity, &units) != 2)
    {
        printf("Invalid format\n");
        exit(EXIT_FAILURE);
    }

    switch (units)
    {
    case FAHRENHEIT:
        quantity_converted = (quantity - 32.0) * 5.0 / 9.0;
        printf("The temperature %.1f degrees Fahrenheit converts to %.1f degrees Celsius\n",
               quantity, quantity_converted);
        break;

    case CELSIUS:
        quantity_converted = quantity * (9.0 / 5.0) + 32.0;
        printf("The temperature %.1f degrees Celsius converts to %.1f degrees Fahrenheit\n",
               quantity, quantity_converted);
        break;

    case MILES:
        quantity_converted = quantity * 1.609;
        printf("The distance %.1f miles converts to %.1f kilometers\n",
               quantity, quantity_converted);
        break;

    case KILOMETERS:
        quantity_converted = quantity / 1.609;
        printf("The distance %.1f kilometers converts to %.1f miles\n",
               quantity, quantity_converted);
        break;

    case POUNDS:
        quantity_converted = quantity * 0.454;
        printf("The weight %.1f pounds converts to %.1f kilograms\n",
               quantity, quantity_converted);
        break;

    case KILOGRAMS:
        quantity_converted = quantity / 0.454;
        printf("The weight %.1f kilograms converts to %.1f pounds\n",
               quantity, quantity_converted);
        break;

    default:
        printf("Unrecognized units\n");
        exit(EXIT_FAILURE);
        break;
    }

    return 0;
}