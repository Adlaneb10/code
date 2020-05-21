/* Program that uses pointer notation only
with array */

#include <stdio.h>
#define SIZE 10

int main()
{
    char barack[] = {'Y','E','S',' ','W','E',' ','C','A','N'};
    char michelle[SIZE] = {' '};
    int i;

    //Part A copying contents from barack array to michelle array
    for(i=0;i<SIZE;i++)
    {
        *(michelle+i) = *(barack+i);
    }//End for loop

    //Part B
    for(i=0;i<SIZE;i++)
    {
        if(*(michelle+i) == ' ')
        {
            *(michelle+i) = '_';
        }// End if
        printf("%c", *(michelle+i));
    }
    

    return 0;
}