#include <stdio.h>

int main(void)
{
    int a = 125;
    int b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("1 -> %d\n", a + c);
    printf("2 -> %f\n", x + c);
    printf("3 -> %f\n", dx + x);
    printf("4 -> %li\n", ((int) dx) + ax);
    printf("5 -> %f\n", a + x);
    printf("6 -> %d\n", s + b);
    printf("7 -> %li\n", ax + b);
    printf("8 -> %hd\n", s + c);
    printf("9 -> %ld\n", ax + c);
    printf("10 -> %li\n", ax + ux);
}