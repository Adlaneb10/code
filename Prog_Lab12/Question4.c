/* .
Write a program that uses 2 functions called sum()and average(). Your program must ask the user to enter 3 numbers inside the main().
Your main() should then pass these 3  values  as  parameters  to  the  function sum(). This  function  should  calculate  the  sumof the 3 numbers.
Your function sum() Should then pass the sumof the 3 numbers as a parameter to the function average().
The function average()should then calculate the average of the 3 numbers and display this on the screen.
Author: Adlane Boulmelh
Date:08/02/2020 */
#include <stdio.h>

//Function signature
void calc(int sum, int average);
int main()
{
    int total;
    int num1,num2,num3;
    printf("You'll have to enter three numbers. Enter first number\n");
    scanf(" %d",&num1);
    printf("Enter second number\n");
    scanf(" %d",&num2);
    printf("Enter third number\n");
    scanf(" %d",&num3);
    total = num1 + num2 + num3; 
    int avg;
//call function
calc(total, avg);
return 0;
}//End main

//Function to calculate sum and average
void calc(int sum, int average)
{
    average = sum/3;
    printf("The average is %d\n", sum);
}//End function