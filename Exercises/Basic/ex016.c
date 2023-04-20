#include <stdio.h>

int main(void)
{
    float seconds, hours, minutes, scd;
    printf("Input seconds: ");
    scanf("%f", &seconds);
    hours = seconds/3600;
    minutes = (hours - (int)hours) * 60;
    scd = (minutes - (int)minutes) * 60;
    printf("%0.1f hours: %0.1f minutes: %0.1f seconds", hours, minutes, scd);
    return 0;
}