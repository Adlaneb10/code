/* Make a program converts 5 elements in array from miles and gallons to mpg and outputs highest and lowest number
using only pointer notation
Author:Adlane
Date: 20/11/2019
*/

#include <stdio.h>
#define SIZE 5

int main()
{
    float miles[SIZE];
    float gallons[SIZE];
    float mpg[SIZE];
    float highest,lowest;
    int i;

    printf("Enter 5 numbers in \n");

    for(i=0;i<SIZE;i++)
    {
        scanf("%f", &*(miles+i), &*(gallons+i));
    }
   
    

//mpg = miles/gallons
    for(i=0;i<SIZE;i++)
    {
        *(mpg+i) = *(miles+i)/ *(gallons+i);
        printf("%f mpg\n", *(mpg+i));
    }

    highest = *(mpg+0);
    lowest = *(mpg+0);
    
    for(i=0;i<SIZE;i++)
    {
        if(highest < *(mpg+i))
        {
            highest = *(mpg+i);
        }

        if(lowest > *(mpg+i))
        {
            lowest = *(mpg+i);
        }
    }//End for loop

    printf("Highest number is %f and lowest is %f", highest, lowest);

    return 0;
}