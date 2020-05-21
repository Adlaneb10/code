/*Q2 Write a single scanf() statement to input values from the keyboard for each of following
Author: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    int first;
    int second, third, fourth;
    float principal, rate, time;
    char keyval1, keyval2;
    char c;
    int i;
    float f;
    double d;

    printf("Enter 4 integers, 4 floats, 3 chars, 1 integer and one double\n");
    
    scanf("%d,%d,%d,%d,%f,%f,%f,%f,%1s,%1s,%1s,%d,%f,%lf", &first &second &third &fourth &principal &rate &time &keyval1 &keyval2 &c &i &f &d);

    printf("%d,%d,%d,%d,%f,%f,%f,%f,%1s,%1s,%1s,%d,%f,%lf", first, second, third,fourth, principal, rate, time, keyval1, keyval2, c, i, f, d);

    return 0;

}