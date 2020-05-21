/*Program using Calloc() to dynamically allocate memory
Date: 26/11/2019 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums;
    //int no_of_bytes
    int i;

    printf("Enter the number of numbers\n");
    scanf("%d", &no_of_nums);

    /* Do not need to calculate number of bytes required when using calloc()
    As calloc() does this */
    //Allocate memory

    ptr = (int*)calloc(no_of_nums, sizeof(int));

    //Check if memory allocated sucsessfully

    if(ptr == NULL)
    {
        printf("Failed to allocate memory\n");
    }
    else //Did allocate successfully
    {
        for(i=0;i<no_of_nums;i++)
        {
            scanf("%d", & *(ptr+i));
        
        }
        for(i=0;i<no_of_nums;i++)
        {
            printf("%d\n", *(ptr + i));
        }
        free(ptr); //Releases back memory
    }//End else

    return 0;
}