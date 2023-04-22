#include <stdio.h>

int main(void)
{
    int password = 1234;
    int read = 0;
    while (read != 1234)
    {
        printf("Input the password:\n");
        scanf("%i", &read);
        if (read != 1234)
        {
            printf("Incorrect password\n");
        }
    }
    return 0;
}