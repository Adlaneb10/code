/* Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4 columns in each) when they are declared. In your program, declare a 3rd 3x4 array.
Multiply each corresponding element in the 1st and 2nd array and store this product in the corresponding element of the 3rd array. E.g array3 [0][0] = array1 [0][0] x
array2 [0][0], array3[0][1] = array[0][1] x array2[0][1], etc
Author: Adlane
Date: 18/11/2019 */

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    int array1[ROW][COL] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int array2[ROW][COL] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int array3[ROW][COL];
    int i,j;

    for (i = 0; i<ROW; i++)
    {
        for(j=0;j<COL;j++)
        {
            array3[i][j] = array2[i][j] * array1[i][j];
            printf("*[i * j] => %d\n", array3[i][j]);
        }
    }   
    return 0;
}