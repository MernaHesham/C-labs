#include <stdio.h>

/* functions */
int ADD(int, int); //protoype should be first
void MyName();

void main(void)
{

    int x, y, z;
    printf("Enter two numbers to add:");
    scanf("%d %d", &x, &y);
    z = ADD(x, y); //calling function ADD
    printf("the result is: %d \n", z);

    /* Print my name */
    MyName();
}

int ADD(int op1, int op2) //implementing function ADD
{
    int result = op1 + op2;
    return result;
}

void MyName(void)
{
    for (int i = 0; i < 6; i++)
    {
        printf("MERNA \n");
    }
}