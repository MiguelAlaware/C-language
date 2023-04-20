#include <stdio.h>

int main(void)
{
    int side1 = 7;
    int side2 = 5;
    int perimeter = (side2 + side2) + (side1 + side1);
    int area = side1 * side2;

    printf("Perimeter of the rectangle: %i\n", perimeter);
    printf("Area of the rectangle: %i\n", area);
}