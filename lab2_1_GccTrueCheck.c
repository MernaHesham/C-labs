#include <stdio.h>

void main(void)
{
    int x = 3 && 0;
    int y = 3 || 0;
    printf("False value of gcc is %d \n", x);
    printf("True value of gcc is %d", y);
}