/* Program to input three floating point numbers and calculate their sum and their average
Author: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    float one = 6.5;
    float two = 7.8;
    float three = 9.2;
    float sum; 
    float average;

    sum = one + two + three;
     printf ("%f\n", sum);

     average = sum/3;
    printf("%f", average);
    
    return 0;
}