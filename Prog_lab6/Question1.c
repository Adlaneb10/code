/*Write a program that uses an array to read in 5 numbers.
 Copy the contents of this array into another array
 Author: Adlane Boulmelh
 Date: 06/11/2019
 */

#include <stdio.h>

int main()
{
    int i;
    int entry[5] = {1,2,3,4,5};
    int copy[5];

  
    for(i=0;i<5;i++)
    {
        copy[i] = entry[i];
    }
    printf("array copy contains\n");
    for(i=0;i<5;i++)
    {
        
        printf("%d\n", copy[i]);
    }
    
    
    return 0;
}