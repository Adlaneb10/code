/* Write a program to accept a temperature in degrees farenheit and convert to degrees celsius.
program should display "Enter a temperature in degrees farenheit" .
Using the formula Celsius= (Farenheit-32.0)*(5.0/9.0)
Author: Adlane Boulmelh
Date: 07/10/2019
*/
#include <stdio.h>
int main()
{
    float celsius;
    float farenheit;

    printf("Enter a temperature in degrees farenheit\n");

    scanf("%f", &farenheit);

    celsius = (farenheit - 32.0)*(5.0/9.0);

    printf("%f\n", celsius);

    return 0;
}