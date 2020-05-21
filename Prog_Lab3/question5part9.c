/* Write a program to input two integers from keyboard and display the first
number as a percentage of the second number. Display value of percentage with
one decimal place.
Example numbers are 5 and 40 your output should look like this
5 is 12.5 percent of 40
Auhtor: Adlane Boulmelh
Date: 11/10/2019
*/

#include <stdio.h>
int main()
{
    int first;
    int second;
    float percent;


    printf("Enter your first number\n");

    scanf("%d", &first);

    printf("Enter your second number\n");

    scanf("%d", &second);

    percent = first / second;

    printf("%f\n", percent);

    
    
    return 0;
}