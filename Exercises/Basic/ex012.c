#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    int y;
    int z;
    int high;
    printf("First integer: ");
    scanf("%i", &x);
    printf("Second integer: ");
    scanf("%i", &y);
    printf("Third integer: ");
    scanf("%i", &z);
    if(x > y)
    {
        high = x;
    }
    else
    {
        high = y;   
    }
    if (z > x)
    {
        high = z;
    }
    else
    {
        high = x;
    }
    if (y > z)
    {
        high = y;
    }
    else
    {
        high = z;
    }

    printf("The maximum between these 3 is %i\n", high);
}