#include <stdio.h>

int main(void)
{
    int p, q, r, s;
    printf("First integer: ");
    scanf("%i", &p);
    printf("Second integer: ");
    scanf("%i", &q);
    printf("Third integer: ");
    scanf("%i", &r);
    printf("Fourth integer: ");
    scanf("%i", &s);
    
    if (q > r && s > p && (p % 2 == 0) && ((r + s) > (p + q)))
    {
        printf("Correct Values\n");
        return 0;
    }
    else
    {
        printf("Wrong values\n");
        return 1;
    }
}