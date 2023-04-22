#include <stdio.h>

int main(void)
{
    int integer;
    printf("Type an integer: ");
    scanf("%i", &integer);
    if ((integer < 0) || (integer > 80))
    {
        printf("Value given is outside the range.\n");
        return 1;
    }
    return 0;
}