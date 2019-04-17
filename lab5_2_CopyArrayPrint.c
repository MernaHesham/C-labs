#include <stdio.h>
/* take 5 numbers and copy it into another array and print the copy */

void main(void)
{
    int Arr[5] = {0};
    int Copy[5] = {0};
    int temp, i;

    for (i = 0; i < 5; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf("%d", &temp);
        Arr[i] = temp;
        Copy[i] = Arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", Copy[i]);
    }
}