#include <stdio.h>
/* get 10 numbers then print the sum and avg */

void main(void)
{

    int Arr[10] = {0};
    int temp, i;
    int sum = 0, avg = 0;
    char command;

    for (i = 0; i < 10; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf("%d", &temp);
        Arr[i] = temp;
        sum += temp;
    }

    printf("what do you want to 'print' or to get 'sum'?: ", command);

    if (command == 'print')
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d \n", Arr[i]);
        }
    }
    else if (command == 'sum')
    {
        printf("the sum is %d \n", sum);
    }
    else
    {
        printf(" please enter either sum or print");
    }
}