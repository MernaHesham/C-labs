#include <stdio.h>
/* Factorial of a number */

void main(void)
{
    int number;

    // Start factorail with 1
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // loop terminates when number is less than or equal to 0
    while (number > 0)
    {
        factorial *= number;
        number--;
    }
    printf("Factorial= %d", factorial);
}
