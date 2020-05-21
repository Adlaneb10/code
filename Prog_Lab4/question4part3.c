/* Write a program to read in two integers and check if the first integer is evenly divisble by the second
Use modulus % operator
Author: Adlane Boulmelh
Date: 14/10/2019
*/
#include <stdio.h>
int main()
{
    int one;
    int two;

    printf("Enter your first integer\n");
    scanf("%d", &one);

    printf("Enter your second integer\n");
    scanf("%d", &two);

    if(one%two == 0)
        {
            printf("%d is evenly divisible by %d ", one, two);
        }//End if statement
        else
        {
            printf("%d is not evenly divisible by %d",);
        }//End else statement
    

    
    return 0;
}