/* Program to calculate the average age of ten people using an array.
Author: Adlane
Date: 07/11/2019 */
#include <stdio.h>

int main()
{
    int ages[10];
    int i;
    int total_age = 0;

    printf("Enter ages of ten people\n");
    // Input and total each age 
    for(i=0;i<10;i++)
    {
        scanf("%d", &ages[i]);
        total_age += ages[i];
    }
    printf("Average age is %d\n", total_age/10);

    return 0;

}