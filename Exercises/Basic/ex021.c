#include <stdio.h>

int main(void)
{
    int list[5];
    int sum;
    for (int i = 0; i < 5; i++)
    {
        printf("Input an integer (%i)\n", i+1);
        scanf("%i", &list[i]);
        if ((list[i] % 2) == 1)
        {
            sum = sum + list[i];
        }
    }
    printf("The sum of the odd numbers is: %i", sum);
}