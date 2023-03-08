#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n = get_int("Type a number: ");
    float sq = sqrt(n);
    printf("The square root of %i equals %f\n", n, sq);

    srand(time(NULL));
    int n2 = rand();
    printf("%i\n", n2); 
}