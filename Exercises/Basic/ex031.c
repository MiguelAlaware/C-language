#include <stdio.h>

int main(void)
{
    int pair[2];
    int oddsum = 0;
    printf("Input a pair of numbers(Example: 10, 2): \n");
    printf("First number: \n");
    scanf("%i", &pair[0]);
    printf("Second number: \n");
    scanf("%i", &pair[1]);
    
    printf("List of odd numbers: \n");
    for (int i = pair[1]; i < pair[0]; i+=1)
    {
        if ((i % 2) == 1)
        {
            oddsum+=i;
            printf("%i \n", i);
        }
    }
    printf("Sum=%i\n", oddsum);
    return 0;
}