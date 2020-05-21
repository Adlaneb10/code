/* In a triangle, the sum of any two sides must be greater than the third side. Write a program to input three numbers and determine if the form a trianlge
Author: Adlane Boulmelh
Date: 14/10/2019
*/
#include <stdio.h>
int main()
{
    int side1;
    int side2;
    int side3;
    int sum;


    printf("Enter your first number\n");
    scanf("%d", &side1);

    printf("Enter your second number\n");
    scanf("%d", &side2);

    printf("Enter your third number\n");
    scanf("%d", &side3);

    if(side1 + side2 < side3)
    {
        printf("This forms a triangle");
    }// End if block
    else if(side1 + side3 < side2)
    {
        printf("This forms a triangle");
    }//End else if block
    else if(side2 + side3 < side1)
    {
        printf("This forms a triangle");
    }//End else if block
    else
    {
        printf("This doesnt form a triangle");
    }// End else block

    return 0;
}