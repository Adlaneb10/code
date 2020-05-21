/*Write a program using a whileloop to display the numbers 1 -10 in descendingorder on the same 
line and each number separated by a comma (e.g. 10,9,8,7,6,5,4,3,2,1).
Auhtor: Adlane Boulmelh
Date: 21/10/2019
*/
#include <stdio.h>
int main()
{
    int i =10;

    while(i>=1)
    {
        printf("%d", i);

        if (i!=1)
        {
            printf(",");
        }
        

        i--;
    }
return 0;
}