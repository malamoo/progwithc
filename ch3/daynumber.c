/* Read a date and calculate the day number within the year.
*/

#include <stdio.h>
#include <stdlib.h>

#define DAYS_IN_JAN 31
/* days in February is dynamic */
#define DAYS_IN_MAR 31
#define DAYS_IN_APR 30
#define DAYS_IN_MAY 31
#define DAYS_IN_JUN 30
#define DAYS_IN_JUL 31
#define DAYS_IN_AUG 31
#define DAYS_IN_SEP 30
#define DAYS_IN_OCT 31
#define DAYS_IN_NOV 30
#define DAYS_IN_DEC 31

#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12

int main(int argc, char const *argv[])
{
    int day, month, year, days_in_feb, day_number;

    printf("Enter date in dd/mm/yyyy format: ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3)
    {
        printf("Date invalid\n");
        exit(EXIT_FAILURE);
    }
    printf("%02d/%02d/%04d is day number ", day, month, year);

    /* determine the number of days in February */
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_feb = 29;
    }
    else
    {
        days_in_feb = 28;
    }

    /* calculate the day number within the year, given the month */
    if (month == JAN)
    {
        day_number = day;
    }
    else if (month == FEB)
    {
        day_number = DAYS_IN_JAN + day;
    }
    else if (month == MAR)
    {
        day_number = DAYS_IN_JAN + days_in_feb + day;
    }
    else if (month == APR)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + day;
    }
    else if (month == MAY)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     day;
    }
    else if (month == JUN)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + day;
    }
    else if (month == JUL)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + day;
    }
    else if (month == AUG)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + DAYS_IN_JUL + day;
    }
    else if (month == SEP)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + DAYS_IN_JUL + DAYS_IN_AUG +
                     day;
    }
    else if (month == OCT)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + DAYS_IN_JUL + DAYS_IN_AUG +
                     DAYS_IN_SEP + day;
    }
    else if (month == NOV)
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + DAYS_IN_JUL + DAYS_IN_AUG +
                     DAYS_IN_SEP + DAYS_IN_OCT + day;
    }
    else
    {
        day_number = DAYS_IN_JAN + days_in_feb + DAYS_IN_MAR + DAYS_IN_APR +
                     DAYS_IN_MAY + DAYS_IN_JUN + DAYS_IN_JUL + DAYS_IN_AUG +
                     DAYS_IN_SEP + DAYS_IN_OCT + DAYS_IN_NOV + day;
    }

    printf("%d in the year\n", day_number);

    return 0;
}
