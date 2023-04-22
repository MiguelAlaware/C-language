#include <stdio.h>

int main(void)
{
    int number;
    printf("Input an integer: \n");
    scanf("%i", &number);
    if ((number % 2) == 0 && number > 0)
    {
        printf("Positive even\n");
    }
    if ((number % 2) == 0 && number < 0)
    {
        printf("Negative even\n");
    }
    if ((number % 2) == 1 && number > 0)
    {
        printf("Positive odd\n");
    }
    if ((number % 2) == 1 && number < 0)
    {
        printf("Negative odd\n");
    }
    else
    {
        printf("Neutral\n");
    }
    return 0;
}