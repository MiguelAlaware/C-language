#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, den;
    printf("Input (a): ");
    scanf("%f", &a);
    printf("Input (b): ");
    scanf("%f", &b);
    printf("Input (c): ");
    scanf("%f", &c);
    den = (b*b) - (4*(a)*(c));

    if(den > 0 && a != 0)
    {
        double x, y;
        den = sqrt(den);
        x = (-b + den) / (2*a);
        y = (-b - den) / (2*a);
        printf("Solution 1: %.5lf\n", x);
        printf("Solution 2: %.5lf\n", y);
    }
    else
    {
        printf("\nImpossible to find the roots.\n");
    }
    return 0;
}