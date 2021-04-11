/*Leap years must be divisible by 400 or 4 and not by 100. To solve this, I am going to use the IF STATEMENTS, the modulus, OR and the AND tools in C*/

#include<stdio.h>

/*STEP 1: Declaration of variables to be used*/
int main(void)
{
    int year;

/*STEP 2: Asking and accepting the year from the user*/
    printf("Enter the year in question (in decimal numbers) below: \n");
    scanf("%d", &year);

/*STEP 3: Establishing if the year meets all the above parameters using the if statement and printing out the appropriate messages after*/

    if ((year% 400 == 0)|| (year%4 == 0) && (year%100 != 0))
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }
return 0;
}
