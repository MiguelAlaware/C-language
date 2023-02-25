#include <stdio.h>
#include <cs50.h>

int main(void)    
{
    //Usuário da input para x
    float x = get_int("x: ");
    //Usuário da input para y
    float y = get_int("y: ");
    //Faz a adição
    float z = (float) x / (float) y;
    printf("%.50f\n", z) ;
}