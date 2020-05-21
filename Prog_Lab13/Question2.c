/*Write  a  program  that  uses  a  function  to  calculate the  average  of  3  numbers.  
Your  main()  should  ask  the  user  to  enter  these  3  numbers and  they  should  be  passed  to  the  function  as  parameters.  
Your  function  should calculate  the  average  and  return  this  value back  to  the  main().  
Your  main()  should then display this average value 
Author: Adlane Boulmelh
Date: 13/02/2020 */
#include <stdio.h>
#define SIZE 3

//Function Signature
void average(int sum);

int main()
{
    int num1,num2,num3;
    
    printf("Enter three numbers. Please enter your first number \n");
    scanf(" %d", &num1);
    printf("Enter your second number\n");
    scanf(" %d", &num2);
    printf("Enter third number\n");
    scanf(" %d", &num3);
    int sum;
    sum = num1 + num2 + num3;
    //Call funtion
    average(sum);
    return 0;
}
//Function used to calculate the average
void average(int total)
{
    int average;
    average = total / SIZE;
    printf("Average of 3 values is %d\n", average);
}//End function
