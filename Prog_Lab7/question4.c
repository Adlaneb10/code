/* Write a program to read in fifteen numbers and display them as follows 
a) Each number on a seperate line
b) On one line, each number seperated by a single space
c) as in (b) but in the reverse order to which they were input
Author: Adlane
Date: 11/11/2019
*/
#include <stdio.h>
#define ARRAY 5

int main()
{
    int i;
    int numbers [ARRAY];
    int j;

    printf("Enter five numbers\n");

    for(i=0;i<ARRAY;i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(j=ARRAY;j>-1;j--)
    {
        printf(" %d", numbers[j]);
    }

    
    return 0;

}