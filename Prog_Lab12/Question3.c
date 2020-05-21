/* Write a  program  that  uses  a  function  to  find  the  highest  and  lowest  number  of  3 values.
These   3   values   must   be   passed as   parameters   to   the   function, i.e. function_name(int,  int,  int).  
Your  function  should  find  these values  and  display messages stating.
Author: Adlane Boulmelh 
Date: 08/02/2020 */
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
    //Smallest value
    if(num1>num2)
    {
        low = num2;
    }//end if
    if(num2>num3);
    {
        low = num3;
    }//end if
    if(num3>num1)
    {
        low = num1;
    }

//Display contents
    printf("The highest value is %d\n The lowest value is %d\n", max,low);
    
}//End function program
