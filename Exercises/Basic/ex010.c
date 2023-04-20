#include <stdio.h>

int main(void)
{
    float W1 = 15;
    int NO1 = 5;
    float W2 = 25;
    int NO2 = 4;
    
    float W_AVRG = ((W1 * NO1) + (W2 * NO2)) / (NO1 + NO2);
    printf("Average Value: %f\n", W_AVRG);
    return 0;

}