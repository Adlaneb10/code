/* Remove size of int
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int no_nums;
    int no_bytes;
    int i;

    printf("Enter number of numbers\n");
    scanf("%d", &no_nums);

    no_bytes = no_nums*1;

    ptr=malloc(no_bytes);

    if(ptr==NULL)
    {
        printf("Failed to allocate memory\n");
    }
    else
    {
        for(i=0;i<no_nums;i++)
        {
            scanf("%d",&*(ptr+i));
            printf("%d\n",*(ptr+i));
        }//end for loop
    //Release memory block
    free(ptr);
    }//end else
    return 0;    
}
    