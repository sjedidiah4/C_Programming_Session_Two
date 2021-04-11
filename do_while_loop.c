/* Program to add numbers until the user enters a number greater than 100*/

#include <stdio.h>
int main()
{
/*Definition of the variables to be used in the function*/
    int number, sum = 0;

/* the body of the loop is executed at least once*/

printf("Enter the numbers below: \n");
    do                                  /*Each time the user enters a new number, the do fucntion will keep on scanning the new entry and incrementing the value of sum. This process only breaks at that point when the user enters a number that is bigger than 100*/
    {
        scanf("%d", &number);
        sum += number;
    }
    while(number < 100);                /*Note that when it comes to the addition, even the number greater than 100  (the one that caused the loop to break) is added. If one needs to avoid such, it is best that you take the user input and save it into an array then you can remove the last number through extra lines of code*/

    printf("Sum = %d",sum);

    return 0;
}