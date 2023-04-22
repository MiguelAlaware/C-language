#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Input first integer ");
    scanf("%i", &n);
    printf("Input second integer ");
    scanf("%i", &m);
    if ((m % n == 0) || (n % m == 0))
    {
        printf("Multiplied!\n");
    }
    else
    {
        printf("Not Multiplied!\n");
    }
    return 0;
}