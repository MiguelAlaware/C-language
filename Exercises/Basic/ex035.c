#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x:");
    scanf("%i", &x);
    printf("y:");
    scanf("%i", &y);    
    int div = x / y;
    if ((x % y) != 0)
    {
        printf("Division not possible\n");
    }
    else
    {
        printf("Output: %i\n", div);
    }
}