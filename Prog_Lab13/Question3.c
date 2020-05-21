/*Write a program that uses a function to check for the  highest  value  of  3  numbers.  
You  should  enter  the  3  numbers  using  main()  and these  should  be  passed  to  your  function.  
Your  function  should  find  the  highest  of these  numbers  and  return  it  back  to  main().  
Your  main()  should  then  display  this highest number
Auhtor: Adlane Boulmelh
Date: 13/02/2020 */
#include <stdio.h>

//Function signature
void program(int num1, int num2, int num3); //Dont have to have the name of variable you can just do int,int,int
int main()
{
    int var1;
    int var2;
    int var3;
    printf("Please enter your first number\n");
    scanf(" %d",&var1);

    printf("Please enter your second number\n");
    
    scanf(" %d", &var2);
    
    printf("Please enter your third numnber\n");
    
    scanf(" %d", &var3);    
    //Call function program
    program(var1,var2,var3);
    return 0;
}//End main

//Function that finds the highest and lowest value of three values
void program(int num1, int num2,int num3)
{
    int max;
    int low;
    max = num1;
    low = num1;
    if(num1<num2)
    {
        max = num2;
    }//end if
    if(num2 < num3)
    {
        max = num3;
    }//end if
//Display contents
    printf("The highest value is %d\n", max);
}