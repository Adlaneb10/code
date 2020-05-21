/* Write a program to input 5 numbers into two 1-D Arrays, Each 5 elements
And display result of multiplying corresponding elements together
Author: Adlane
Date: 11/11/2019
*/

#include <stdio.h>
#define LIST1 5 
#define LIST2 5
#define LIST3 5

int main()
{
    int numbers [LIST1];
    int numbers2 [LIST2];
    int numbers3 [LIST3];
    int i;

    printf("Enter 5 numbers\n");

    for ( i = 0; i < LIST1; i++)
    {
        scanf("%d", &numbers[i]); 
        numbers2[i] = numbers[i];
        
    }


    for(i=0; i<LIST1; i++)
    {
        numbers3[i]=numbers[i]*numbers2[i];
    }

    
    for(i=0;i<LIST1;i++)
    {
    printf("%d ", numbers3[i]);
    }


    return 0;
    
}