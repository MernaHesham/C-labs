#include <stdio.h>

int fact(int);

void main(void)
{
    /* Recursion */
    int x, factorial;
    printf("Enter the num to get the factorial:");
    scanf("%d", &x);
    factorial = fact(x);
    printf("The factorial is: %d", factorial);
}

int fact(int num)
{
    if (num >= 1)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}