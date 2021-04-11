#include <stdio.h>
#define class_size 4                             /*This is the definition (as macros) of the maximum number of marks that the program can take. This can be adjusted any time depending on the class size*/

int main() 
{
/*STEP 1: Declaration of variables to be used in the function*/
   int x,i;
   int marks[class_size], sum = 0.0;
   double average;

/*STEP 2: Loop to accept the user input and save it into the array marks*/
   for (i = 0; i < class_size; i++)                 /*In this first instance, we are using i as the counter. The loop breaks once the user enters a mark higher than 100. The i is also noted by the program*/
   {
      printf("Enter mark for student %d below: \n", (i+1));
      scanf("%d", &marks[i]);

      if (marks[i] >=100)                           /*Once the user enters a mark that is greater than 100, the loop stops and prints out the results it has so far with the input keyed in*/
      {
         break;
      }

      sum += marks[i];
      average = sum/(i+1);                       /*Care is taken to do (i+1) because naturally, with C as a language, the loop was set to begin at 0. This presents two problems. Problem 1: the first average value is going to be divided by zero hence would result to an error. Problem 2: if the user entered values for 6 students, for example, the eventual average would be divided by 5 since the counter is from zero hence the need to say +1. An alternative solution would be to set the for loop counter to begin from 1 upwards*/
    }

    printf("The student marks entered are as follows: \n");
    for (x = 0; x < i; x++)                      /*Now that we have noted the i, we use x as the counter with i as the limit to print out the user input back at him then the resulting average is presented below*/
    {
        printf("student %d ---> %d marks\n", (x+1), marks[x]);
    }

    printf("The sum is %d and the average = %.2f", sum,average);

return 0;

}