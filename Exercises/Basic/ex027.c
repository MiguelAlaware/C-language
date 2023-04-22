#include <stdio.h>

int main(void)
{
    int sodds = 0;
    for (int i = 0; i < 5; i++)
    {
        int numb;
        printf("Input a number (%i)\n", i+1);
        scanf("%i", &numb);
        if ((numb % 2) == 1)
        {
            sodds+=numb;
        }
        else
        {
            continue;
        }
    }
    printf("The sum of all odd numbers equals to: %i\n", sodds);
    return 0;
}