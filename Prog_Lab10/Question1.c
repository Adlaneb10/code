/*Write a program that uses a pointer (which points to a variable called radius to store the radius of a circle) 
to read the radius of a circle (i.e. use the indirection operator in a scanf() statement to read and store the radius inside the floating -point radius variable).
Your program should calculate and display the diameter (2 xradius) and area (Пxradius2) of the circle
using other pointers(these also need to point to other variables required such as diameterand area) .Assume П has the value 3.1 
Author: Adlane Boulmelh
Date: 11/12/2019 */
#include <stdio.h>
int main()
{
    float radius;
    float diameter;
    float area;
    float pi = 3.14;
    float *ptr1;
    ptr1 = &radius; //pointing to radius and is stored in pointer variable

    printf("What is the radius of the circle?\n");

    scanf("%f", &*ptr1); //Store in pointer variable radius

    diameter = 2 * radius;
    area = pi*(radius*radius);

    printf("The diameter of the circle is %.2f cm and the area of the circle is %.2f cm2 \n", diameter, area);




    return 0;
}