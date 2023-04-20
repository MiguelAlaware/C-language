#include <stdio.h>

int main(void)
{
    int days = 1329;
    int years = days / 365;
    int weeks = (days % 365) / 7;
    int rdays =  days - ((years * 365) + (weeks * 7)) ;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", rdays);
}