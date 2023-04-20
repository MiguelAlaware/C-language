#include <stdio.h>

int main(void)
{
    int distance;
    float fuel;

    printf("Distance travelled (in km): ");
    scanf("%i", &distance);
    printf("Fuel spent (in liters): ");
    scanf("%f", &fuel);

    float consumption = distance / fuel;

    printf("Average consumption (km/lt) -> %0.3f\n", consumption);
    return 0;

}