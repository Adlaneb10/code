/*Program that calculates average age of set of people using Array
 Author: Adlane Boulmelh
 Date: 06/11/2019
 */

#include <stdio.h>


int main()
{
    int ages[10];
    int sum = 0;
    float mean = 0;
    int i;

    //Enter 5 ages
    printf("Enter eleven ages\n");

    for(i=0;i<11;i++)
    {
        scanf("%d", &ages[i]);
        sum = sum + ages[i];
    }
    mean = (float)sum/11;
    printf("\n Average age is %.2f", mean);
    


    return 0;
}