#include <stdio.h>

int main(void)
{
    int radius = 6;
    float area, perimeter;

    perimeter = 2 * 3.14 * radius;
    area =  3.14 * radius * radius;
    printf("The area equals to %f\n", area);
    printf("The perimeter equals to %f\n", perimeter);
}