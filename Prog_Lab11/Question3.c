/* 3.
Write a program that uses dynamic memory allocation to allocate memory for 5 floating-point numbers. You can use either malloc() or calloc().
After memory has been allocated for the 5 float numbers, enter these numbers. 
Calculate the average of these numbers and store this average in another allocated memory block. Display all of the 5 float values on the screen and the average. 
(Hint: you will need to use 2 float pointers, one pointing to the block of memory storing the 5 floating point numbers, 
and one pointing to the block of memory storing the average of the 5 numbers).
Author: Adlane 
Date: 30/01/2020 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    float *ptr;
    float avg;
    int no_bytes;
    int i;

    //Calculate number of bytes
    no_bytes = SIZE *sizeof(float);
    ptr = (float*)malloc(no_bytes);
    //Check memory allocation
    if(ptr==NULL)
    {
        printf("Memory failed to allocate\n");
        
    }//End if
    else
    {//Enter data into memory block
        for(i=0;i<SIZE;i++)
        {
            scanf("%f\n",&*(ptr+i));
        }
    }
    
}
