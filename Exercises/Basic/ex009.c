#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    int y;
    printf("Input one: ");
    scanf("%i", &x);
    printf("Input two: ");
    scanf("%i", &y);
    int p = x * y;
    printf("The product of %i x %i equals to %i\n", x, y, p);
}