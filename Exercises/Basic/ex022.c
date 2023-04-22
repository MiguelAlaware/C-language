#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Vertex for a: ");
    scanf("%f", &a);
    printf("Vertex for b: ");
    scanf("%f", &b);
    printf("Vertex for c: ");
    scanf("%f", &c);
    if ((c + b <= a) || (b + a <= c) || (c + a <= c))
    {
        printf("Invalid values where given, try again.\n");
        return 1;
    }
    float p = a + b + c;
    printf("The perimeter of the triangle is: %0.2f\n", p);
}