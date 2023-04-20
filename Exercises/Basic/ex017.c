#include <stdio.h>

int main(void)
{
    int timed, years, months, days;
    printf("Input time (in days): ");
    scanf("%i", &timed);
    years = timed / 365;
    months = (timed - (365 * years)) / 30;
    days = (timed - (365 * years)) - (months * 30);

    printf("Years: %i, Months: %i, Days: %i\n", years, months, days);
}