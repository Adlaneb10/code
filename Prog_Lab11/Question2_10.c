/*Given array, fill blank spaces with an underline character. use pointer notation
Author:Adlane Boulmelh
Date: 30/01/2020 */
#include <stdio.h>
#define SIZE 8
int main()
{

char chars[SIZE] = {'a',' ','b',' ','c',' ',' ','d'};
int i;

    for(i=0;i<SIZE;i++)
    {
        if(*(chars+i) == ' ')
        {
            *(chars+i) = '_';
        }
        printf("%c",*(chars+i));

    }
return 0;
}