#include <stdio.h>

int main(void)
{
    int pair[2];
    printf("Input a pair of numbers (Example (10,2) : (2,10))\n");
    printf("Input first number: \n");
    scanf("%i", &pair[0]);
    printf("Input second number: \n");
    scanf("%i", &pair[1]);

    if (pair[0] > pair[1])
    {
        printf("The pair is in descending order!\n");
    }
    else
    {
        printf("The pair is in ascending order!\n");
    }
    return 0;
}