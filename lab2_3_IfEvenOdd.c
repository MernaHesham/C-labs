#include <stdio.h>
/* ask the user to enter a number and check if it is Even or Odd number */

void main(void)
{

    int num;
    printf("Please enter number: "); //Get the number to check from the user
    scanf("%d", &num);
    if ((num % 2) != 0)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }
}
