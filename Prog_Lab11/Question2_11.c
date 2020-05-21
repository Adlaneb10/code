/* Given arrays write program to calculate and display the value of each element of mpl. Use pointers, rather than subscripts, to access elements of each array
Author: Adlane
Date: 30/01/2020 
Array_name[i] >>v *(array_name+i)
*/
//mpl = miles/litres

#include <stdio.h>
#define SIZE 5
int main()
{
    float litres[SIZE] = { 11.5,11.21,12.7,12.6,12.4};
    float miles[SIZE] = {471.5,358.72,495.3,453.6,421.6};
    int mpl[5] = {};
    int i;
    
    for(i=0;i<SIZE;i++)
    {
        *(mpl+i) = *(miles+i)/ *(litres+i);
        printf("%d mpl, ",*(mpl+i));
    }//End for 

    return 0;
}