#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char id[10];
    printf("-> What's your ID (Max. 10 chars): ");
    scanf("%s", id);

    int hours;
    printf("-> What's your working hours: ");
    scanf("%i", &hours);

    float receives;
    printf("-> Amount receive per hour: ");
    scanf("%f", &receives);
    
    float salary = (hours * receives);

    printf("Your ID is %s\n", id);
    printf("Your salary is up to: U$ %0.2f\n", salary);
    return 0;
}