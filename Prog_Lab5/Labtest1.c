/*The Fibonacci series is a mathematical series of numbers as follows:
0, 1, 1, 2, 3, 5, 8, 13, 21,…
The series is calculated as: The sum of the current number and the previous number
produces the next number.
Author: Adlane Boulmelh
Date: 21/10/2019
Compiler Used is microsoft visual studio code on Windows 10
*/

#include <stdio.h>

int main() // start main
{
// Declare Variables   
    int current = 0;
    int sum = 0;
    int previous = 0;
    int i=18;
//Sum of current number and previous number produces next number



    while(i>=1)
        {// Start while loop
            
            //Enter first number and read in as current
            printf("Enter a number\n", current);
            scanf("%d", &current);

            printf("\nEnter another number\n", previous);
            scanf("%d", &previous);

            //Equation
            sum = current + previous;

            // Display sum
            printf("Sum is %d,\n", sum);

            
            i--;
        }// End while loop
    
   
    return 0;
}// End main