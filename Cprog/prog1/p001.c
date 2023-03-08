#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello %s, my name is Fialho\n", name);

    int day = get_int("What's the day you were born? ");
    int month = get_int("What's the month you were born? ");
    int year = get_int("What's the year you were born? ");
    printf("You were born on the day %i of the month %i in the year of %i\n", day, month, year);

    int n1 = get_int("First number: ");
    int n2 = get_int("Second number: ");
    int s = n1 + n2;
    printf("The sum between %i and %i equals %i.\n", n1, n2, s);

}