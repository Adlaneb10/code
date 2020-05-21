/*Using malloc() or calloc(), write a program ro input a specified number of integer values into an array and to display
the array and the sum of the elements in the array. Use pointers, not subscripts in program
Author: Adlane Boulmelh
Date: 30/01/2020 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums;
    int no_bytes;
    int i;
    int sum;

    printf("Enter the number of numbers\n");
    scanf("%d", &no_of_nums);
    //Calculate the number of bytes required for block
    no_bytes = no_of_nums *sizeof(int);
    //Instead of hardcoding the size of variable use "sizeof" to calculate the bytes and to get total bytes required
    
    //Allocate the memory required
    ptr = malloc(no_bytes);
    //check if memory allocated successfully
    if(ptr == NULL)
    {
        printf("Memory failed to allocate\n");
    }//End if
    else
    {
        //Enter data into memory
        for(i=0;i<no_of_nums;i++)
        {
            scanf("%d\n",&*(ptr+i));

        }//End for loop
        sum = *(ptr+1);
        for(i=0;i<no_of_nums;i++)
        {
            //Display contents
             printf("You stored %d,",*(ptr+i));
         //Calculate sum of array
             sum = *(ptr+i);
        }
         printf("The sum is %d",sum);
        //Release memory block
        free(ptr);
    }//End else
    return 0;
}//End main