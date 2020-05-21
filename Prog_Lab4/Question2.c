/* Write a program that asks the user to enter an integer between 1 and 100. Check whether integer is odd or even and print a message on the screen stating
 "Number x is even" or "Number y is odd"
 Author: Adlane Boulmelh
 Date: 14/10/2019
 */
#include <stdio.h>
int main()
{
    int number;


    printf("Enter a number between 1 and 100\n");
    scanf("%d", &number);

    if(number%2 == 0)
    {
        printf("Number %d is even\n",number);
    }// End if block
    else
    {
        printf("Number %d is odd\n", number);
    } // End else block
    return 0;
    
}//End main