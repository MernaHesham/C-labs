#include <stdio.h>

/* swap function */
void swap();
void SwapWithoutTemp();
void SwapWithAddSub();

//global variables
/* swap */
int x, y;

void main(void)
{
    x = 5;
    y = 3;
    swap();
    printf("x=%d, y=%d \n", x, y);
    SwapWithoutTemp();
    printf("x=%d, y=%d \n", x, y);
    SwapWithAddSub();
    printf("x=%d, y=%d", x, y);
}

void swap()
{
    int z = x;
    x = y;
    y = z;
}

void SwapWithoutTemp()
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

void SwapWithAddSub()
{
    x = x + y;
    y = x - y;
    x = x - y;
}