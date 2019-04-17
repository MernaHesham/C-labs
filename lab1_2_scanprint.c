/* Printing a variable */
/* Print Scanned Number */

#include <stdio.h>

void main(void)
{
    /* Define variable and initialize it with 10 */
    int x = 10;

    /* Print the variable x */
    printf("The value of x is %d \n", x);
    /* Define a variable to receive a value */
    int y;

    /* Ask the user to enter value */
    printf("Please Enter the value: ");

    /* Scan a decimal value and save it in x */
    scanf("%d", &y);

    /* Print the variable x */
    printf("The value you entered is %d", y);
}