#include <stdio.h>

int main(void)
{
    int pos = 0; 
    int neg = 0;
    for (int in = 0; in < 5; in++)
    {
        int i;
        printf("Input the first number: \n");
        scanf("%i", &i);
        if (i >= 0)
        {
            pos+=1;
        }
        else
        {
            neg+=1;
        }
    }
    printf("Number o positive numbers: %i\n", pos);
    printf("Number of negative numbers: %i\n", neg);
    return 0;
}