#include <stdio.h>
/* definition and initialization */

void main(void)
{
    /* get 10 numbers then print them */
    int Arr[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        int temp;
        printf("Please Enter number %d: ", i);
        scanf("%d", &temp);
        Arr[i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", Arr[i]);
    }
}