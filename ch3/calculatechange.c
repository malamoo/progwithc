#include <stdio.h>
#include <stdlib.h>

#define FIFTY_CENT 50
#define TWENTY_CENT 20
#define TEN_CENT 10
#define FIVE_CENT 5
#define TWO_CENT 2
#define ONE_CENT 1

#define MIN_CENTS 0
#define MAX_CENTS 99

int main(int argc, char const *argv[])
{
    int cents;

    printf("Enter amount in cents: ");
    if (scanf("%d", &cents) != 1 || (cents < MIN_CENTS || cents > MAX_CENTS))
    {
        printf("Invalid amount, must be between %d and %d\n", MIN_CENTS,
               MAX_CENTS);
        exit(EXIT_FAILURE);
    }
    printf("The coins required to make %d cents are:\n", cents);

    if (cents >= FIFTY_CENT)
    {
        printf("%d", FIFTY_CENT);
        cents -= FIFTY_CENT;
    }

    if (cents >= TWENTY_CENT)
    {
        printf(", %d", TWENTY_CENT);
        cents -= TWENTY_CENT;
        if (cents >= TWENTY_CENT)
        {
            printf(", %d", TWENTY_CENT);
            cents -= TWENTY_CENT;
        }
    }

    if (cents >= TEN_CENT)
    {
        printf(", %d", TEN_CENT);
        cents -= TEN_CENT;
    }

    if (cents >= FIVE_CENT)
    {
        printf(", %d", FIVE_CENT);
        cents -= FIVE_CENT;
    }

    if (cents >= TWO_CENT)
    {
        printf(", %d", TWO_CENT);
        cents -= TWO_CENT;
        if (cents >= 2)
        {
            printf(", %d", TWO_CENT);
            cents -= TWO_CENT;
        }
    }

    if (cents >= ONE_CENT)
    {
        printf(", %d", ONE_CENT);
        cents -= ONE_CENT;
    }

    printf("\n");

    return 0;
}