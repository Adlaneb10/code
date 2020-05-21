/*Program to calculate mean ages of five inputs using arrays and symbolic name
Author: Adlane
Date: 06/11/2019
*/
#include <stdio.h>
#define SIZE 5
int main()
{
    int ages[SIZE];
    int i ;
    int average = 0;
    int sum = 0;

    printf("enter numbers");
    
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &ages[i]);
    }
    average = (float) sum/SIZE;
    printf("%d", average);

return 0;
}
