/* Calculate the date it will be tomorrow given some date.
*/

#include <stdio.h>
#include <stdlib.h>

#define JAN 1
#define FEB 2
#define APR 4
#define JUN 6
#define SEP 9
#define NOV 11
#define DEC 12

int main(int argc, char *argv[])
{
    int today_day, today_month, today_year,
        tomorrow_day, tomorrow_month, tomorrow_year;
    int end_of_month;

    printf("Enter date in format dd/mm/yyyy: ");
    if (scanf("%d/%d/%d", &today_day, &today_month, &today_year) != 3)
    {
        printf("Date invalid\n");
        exit(EXIT_FAILURE);
    }
    printf("%-11s%02d/%02d/%04d\n", "Date read:", today_day, today_month, today_year);

    /* calculate end of month */
    if (today_month == FEB)
    {
        /* account for leap years */
        if (today_year % 4 == 0 && (today_year % 100 != 0 || today_year % 400 == 0))
        {
            end_of_month = 29;
        }
        else
        {
            end_of_month = 28;
        }
    }
    else if (today_month == APR || today_month == JUN || today_month == SEP || today_month == NOV)
    {
        end_of_month = 30;
    }
    else
    {
        end_of_month = 31;
    }

    /* increment day and account for both month and year boundaries */
    if (today_day == end_of_month)
    {
        tomorrow_day = 1;
        if (today_month == DEC)
        {
            tomorrow_month = JAN;
            tomorrow_year = today_year + 1;
        }
        else
        {
            tomorrow_month = today_month + 1;
            tomorrow_year = today_year;
        }
    }
    else
    {
        tomorrow_day = today_day + 1;
        tomorrow_month = today_month;
        tomorrow_year = today_year;
    }

    printf("%-11s%02d/%02d/%04d\n", "Tomorrow:", tomorrow_day, tomorrow_month, tomorrow_year);

    return 0;
}
