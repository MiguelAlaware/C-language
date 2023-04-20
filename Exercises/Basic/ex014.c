#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1;
    printf("Input x1: ");
    scanf("%i", &x1);
    int y1;
    printf("Input y1: ");
    scanf("%i", &y1);
    int x2;
    printf("Input x2: ");
    scanf("%i", &x2);
    int y2;
    printf("Input y2: ");
    scanf("%i", &y2);

    double distancep = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));

    printf("Distance between the said points: %f\n", distancep);
    return 0;
}