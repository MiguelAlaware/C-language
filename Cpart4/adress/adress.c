#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    int *d = &n;
    printf("%p \n", d);

    char *s = "hi!";
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}