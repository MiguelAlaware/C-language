#include <stdio.h>
#include <cs50.h>

int main(void)    
{
    //Usuário da input para x
    int x = get_int("x: ");
    //Usuário da input para y
    int y = get_int("y: ");
    //Faz a adição
    int z = x + y;
    printf("%i\n", z) ;
}