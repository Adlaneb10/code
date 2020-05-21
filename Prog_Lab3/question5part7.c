/* Write a program to accept a temperature in degrees Celsius and convert to degrees celsius.
program should display "Enter a temperature in degrees Celsius" .
Using the formula Farenheit = 32 + (celsius * 9/5)
Author: Adlane Boulmelh
Date: 07/10/2019
*/
#include <stdio.h>
int main()
{
    float celsius;
    float farenheit;

    printf("Enter a temperature in degrees celsius\n");

    scanf("%f", &celsius);

    farenheit = (celsius * 9)/5 + 32;
    printf("%f\n", farenheit);

    return 0;
}