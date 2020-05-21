#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no_numbers;
    int i, high, low;
    int *ptr;

    printf("Enter number of numbers\n");
    scanf("%d", &no_numbers);

    //Allocate numbers
    ptr = calloc(no_numbers, sizeof(int));

    //Check if memory allocation successful
    if(ptr == NULL)
    {
        printf("Failed to allocate memory\n");
        return 0;
    }
    else
    {
        //Enter data
        for(i=0;i<no_numbers;i++)
        {
            scanf("%d", &*(ptr+i));
        }

        high = *(ptr);
        low = *(ptr);

        for(i=0;i<no_numbers;i++)
        {
            if(high < *(ptr+i))
            {
                high ==(ptr+i);
            }
            if(low > *(ptr+i))
            {
                low = *(ptr);
            }//end if 
        }//End for
        free(ptr);
    }//end else
    printf("highest is %d and\n lowest is %d\n", high,low);   
    return 0;
}