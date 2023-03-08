#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float op = get_float("Type a number to se some operations: ");

    printf("Sucessor: %f\nPredecessor: %f\n", op+1, op-1);
    printf("Double: %f\nTriple: %f\nSquare root: %f\n", op*2, op*3, pow(op, 0.5));

    float grd1 = get_float("Type your first grade: ");
    float grd2 = get_float("Type your second gradee: ");
    float average = (grd1 + grd2) / 2;
    printf("The average of your grades is %f\n", average);
}
