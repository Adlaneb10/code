/* Returning a value from a function. Write a program that uses a function to check if a number  is  even  or  odd.
Your  main()  should  allow  the  user  to  enter  any  number  and this  should  be  passed  to  your  function. 
Your  function  should  check  if  the  number  is even or odd and return a 1 if even or a 0 if odd.
Your main() should then indicate the result.
Author: Adlane Boulmelh
Date: 13/02/2020 */

#include <stdio.h>

//Function signature
void checker(int result);

int main()
{
    int number;
    printf("What number would you like to check?\n");
    scanf(" %d", &number);
//Call function in main()
    checker(number);
    return 0;
}//End main()

//Function used to determine whether a number is odd or even
void checker(int result)
{
    int odd;
    int even;

    if(result%2 == 0) // even
    {
        printf("This number is even (1)\n");
    }// End if
    if(result%2 != 0 ) //Odd number
    {
        printf("Thisn number is odd (0)\n");
    }//End if 
   
}