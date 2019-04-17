#include <stdio.h>
/* Arrays in functions  */

int ArraySum(int arr[], int size);
void ArrayInsert(int arr[], int size);

void main(void)
{
    int array1[5] = {0};

    ArrayInsert(array1, 5);

    int result = ArraySum(array1, 5);
    printf("the sum of all elemnts is: %d", result);
}

void ArrayInsert(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int ArraySum(int arr[], int size)
{
    //now i can access the array in another function knowing its size
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}