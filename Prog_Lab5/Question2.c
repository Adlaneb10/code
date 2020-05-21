/*Write a C program that will input a positive integer value, and compute the following sequence:
if the number is even, halve it, if the number is
odd, multiply by 3 and add 1.Repeat this process until the value is 1,
 displaying each value. 
Finally display how many of these operations you performed. 

eg: output may be ... Initial value = 9 next is = 28 next is = 14
Auhtor: Adlane Boulmelh
Date: 31/10/2019
*/
#include <stdio.h>
int main()
{
    int input = 0;
    int next =0;
    int counter;

    do
    {
    printf("Enter a positive number\n");
    scanf("%d", input);

        if(input%2 == 0) //Even
        {
            scanf("%d", input);
            input = input/2;
            printf("Next value is %d\n", next);
            scanf("%d", next);
        }


    
        if(input%2 != 0) //Odd
        {
            input = input * 3 + 1;
            scanf("%d", next);
            printf("Next value is %d\n", next);
        }

        

    }//End do
    
    while(next !=1);
    
    return 0;
}