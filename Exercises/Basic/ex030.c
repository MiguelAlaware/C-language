#include <stdio.h>

int main(void)
{
    int listint[5];
    int high, pos;
    printf("Input 5 integers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &listint[i]);
        if (i == 0)
        {
            high = listint[0];
        }
        if (listint[i] > high)
        {
            high = listint[i];
            pos = i;
        }
    }
    printf("Highest value: %i\n", high);
    printf("Position: %i\n", pos+1);
    return 0;
}