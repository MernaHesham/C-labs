#include <stdio.h>

/* calculate employee salary in a week based on the his working hours */
void main(void)
{
    int hours;
    int salary;
    printf("Plese Enter Your working hours: "); //Ask the user to enter his working hours
    scanf("%d", &hours);
    salary = 50 * hours;
    if (hours < 40)
    {
        salary = (salary * 90) / 100; //if hours less than 40, deduct 10 %
    }
    printf("Your Salary is %d", salary);
}