/*Program to read a series of ages to find the youngest, the oldest, and the average.
Author: Adlane
Date: 07/11/2019 */
#include <stdio.h>
#define SIZE 20

int main()
{
    int ages[SIZE];
    int i;
    int total_age = 0;
    int youngest, oldest;

    printf("Enter the ages of %d people\n", SIZE);
    // Input and total each age
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &ages[i]);
        total_age += ages[i];
    }

    youngest = ages[0];
    oldest = ages[0];

    for(i=0;i<SIZE;i++)
    {
        if(ages[i]>oldest)
        {
            oldest =ages[i];
        }
        if(ages[i]<youngest)
        {
            youngest = ages[i];
        }
    }

    printf("Youngest is %d\n", youngest);
    printf("Oldest is %d\n", oldest);
    printf("Average is %d\n", total_age/SIZE);

    return 0;
}