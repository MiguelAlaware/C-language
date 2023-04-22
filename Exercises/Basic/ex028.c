#include <stdio.h>
#include <math.h>

int main(void)
{
    int ask; 
    printf("What is the specified value: ");
    scanf("%i", &ask);
    printf("List of square of each one of the even values from 1 to %i:\n",ask);
    for (int i = 2; i <= ask; i+=2)
    {
        int sqr = pow(i, 2);
        printf("%i^2 = %i\n", i, sqr);
    }
    return 0;

}