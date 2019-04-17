#include <stdio.h>
/* get 10 numbers then print the sum and avg */

void main(void)
{
    //it will initialze index 0 with 0 and the rest will be zero too
    int Arr[10] = {0};

    int temp, i;
    int sum = 0, avg = 0;

    for (i = 0; i < 10; i++)
    {

        printf("Please Enter number %d: ", i);
        scanf("%d", &temp);
        Arr[i] = temp;
        sum += temp;
    }

    avg = sum / 10;
    printf("the sum is %d \n", sum);
    printf("the avg is %d", avg);
}