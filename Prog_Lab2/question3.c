/*Program 3 Write a program to calc and display area of a circle with radius of 4.8cm
assume value of pi = 3.14cm
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    float radius = 4.8;
    float pi = 3.14;
    float circlearea = radius*radius*pi;
    
    printf("circlearea %f\n",circlearea);
    
    getchar();
    return 0;
}