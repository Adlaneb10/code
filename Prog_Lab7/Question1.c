/* What is in Array [8]
Author: Adlane Boulmelh
Date:11/11/2019
*/
#include <stdio.h>
int main()
{
    int a[8];
    int i;

    for(i=0;i<10;i++)
    {
        a[i] = 9-i;
    }

    for(i=0;i<10;i++)
    {
        a[i]=a[a[i]];
    }

    for(i=0;i<10;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;

}

