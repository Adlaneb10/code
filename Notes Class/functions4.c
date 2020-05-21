/*Program that uses a function to retain data */
#include <stdio.h>
//Function signature
int sum(int,int);

int main()
{
    int num1,num2;
    int total;

    printf("Enter two numbers\n");
    
    scanf(" %d", &num1);
    
    scanf(" %d", &num2);
//Calculate the sum of the numbers using function (call function)
    total = sum(num1,num2);
    printf("The sum of %d and %d is %d",num1,num2,total);
    return 0;
}//End main
//Implement function, this function will calculate the sum of two whole numbers and pass back the parameter variables
int sum(int n1,int n2)//Parameter variables
{
    int my_total = n1+n2;
    return my_total;
    
}//end sum()