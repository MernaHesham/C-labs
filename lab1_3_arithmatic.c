/* arithmatic of Two numbers */
#include <stdio.h>

void main(void)
{
    int a, b;                           // Define two integers
    printf("Please Enter number 1 : "); // Ask the user to enter value 1
    scanf("%d", &a);                    //Scan the value and save it in a
    printf("Please Enter number 2 : "); //Ask the user to enter value 2
    scanf("%d", &b);                    //Scan the value and save it in b
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d\n", a % b);
}