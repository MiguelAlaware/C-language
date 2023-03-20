#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    printf("Maths Software\n");
    float num = get_float("First number: ");
    
    printf("The square root of %f is %f\n", num, sqrt(num));

    float adl = get_float("Adjacent leg: ");
    float opl = get_float("Oposite leg: ");

    printf("The value of the hypotenuse is %f \n", hypot(adl, opl));

    float angle = get_float("Type the value of an angle: ");
    float radians = angle * 3.14 / 180;
    float transf = radians / 3.14 * 180;

    if(transf <= 360)
    {
        if (transf > 0)
        {
         printf("Sine %f, Cos %f, Tan %f\n", sin(transf), cos(transf), tan(transf));  
        }  
        else 
        {
            printf("The value must be above 0!\n");
        }
    }
    else
    {
        printf("The value must be under 360\n");
    }

    string names[] ={"Brian", "Rodinei", "Clodovil", "Chaco"};

    int random = rand() % 3 + 0;
    printf("The student chosen to clean the board was %s\n", names[random]);
    
}