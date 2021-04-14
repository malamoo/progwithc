/* Calculate the result of a regular savings plan. */
#include <stdio.h>

double
savings_plan(double initial, double amount, double deb_rate,
             double cred_rate, int years);
/*
 * Calculates an account balance after a number of years,
 * given the initial and monthly amounts, and annual interest rates.
 */
double
savings_plan(double initial, double amount, double deb_rate,
             double cred_rate, int years)
{
        int month;
        double monthly_mult;
        double balance = initial;

        for (month = 1; month <= 12 * years; month++) {
                if (balance >= 0)
                        monthly_mult = 1.00 + (cred_rate / 100.00) / 12;
                else
                        monthly_mult = 1.00 + (deb_rate / 100.00) / 12;
                balance *= monthly_mult;
                balance += amount;
        }

        return balance;
}

int
main(int argc, char **argv)
{
        int years;
        double deb_rate;
        double cred_rate;
        double initial;
        double per_month;
        double answer;

        printf("Enter number of years           : ");
        scanf("%d", &years);
        printf("Enter annual debit rate (%%)     : ");
        scanf("%lf", &deb_rate);
        printf("Enter annual credit rate (%%)    : ");
        scanf("%lf", &cred_rate);
        printf("Enter monthly amount            : $");
        scanf("%lf", &per_month);
        printf("Enter initial amount            : $");
        scanf("%lf", &initial);

        printf("Saving $%.0f plus $%.0f per month for %d years\n",
               initial, per_month, years);
        answer = savings_plan(initial, per_month, deb_rate - 1,
                              cred_rate - 1, years);
        printf("\tat %.1f%% credit and %.1f%% debit per year: $%.0f\n",
               deb_rate - 1, cred_rate - 1, answer);
        answer = savings_plan(initial, per_month, deb_rate,
                              cred_rate, years);
        printf("\tat %.1f%% credit and %.1f%% debit per year: $%.0f\n",
               deb_rate, cred_rate, answer);
        answer = savings_plan(initial, per_month, deb_rate + 1,
                              cred_rate + 1, years);
        printf("\tat %.1f%% credit and %.1f%% debit per year: $%.0f\n",
               deb_rate + 1, cred_rate + 1, answer);

        return 0;
}
