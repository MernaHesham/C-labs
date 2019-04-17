#include <stdio.h>

/* Get max */

int GetMax(int, int);

void main(void)
{
    int x, y, max;
    printf("Enter two numbers to get the max:");
    scanf("%d", &x);
    scanf("%d", &y);
    max = GetMax(x, y);
    printf("the max num is :%d", max);
}

int GetMax(int num1, int num2)
{
    if (num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
