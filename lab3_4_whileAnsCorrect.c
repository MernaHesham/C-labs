#include <stdio.h>
/* Ask for correct answer */
void main(void)
{

    int answer;
    printf("Enter the answer of 3 x 4 = "); //Get the value from the user
    scanf("%d", &answer);

    while (answer != 12) //Loop as long as the answer is not 12
    {
        printf("Not correct, Please try again: ");
        scanf("%d", &answer);
    }
    // Exiting loop means that the answer is 12, loop thank you
    printf("Thank You");
}