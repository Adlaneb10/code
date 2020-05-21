/* Write a program that uses a 3x2 array. Your program must do the following 
a)Enter in values for each element in the array.
b)Calculate and display the sum of row 0, row 1, and row 2separately.
c)Calculate and display the sum of column 0and column 1separately.
d)Find the highest number in the array and display it.
NOTE:I advise you to work the solution for this program on paper first. 
Do not hack code to solve this question
Author: Adlane 
Date: 23/11/2019
*/

#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int sum_row, sum_col = 0;
    int i, j;
    int greatest;

    


    // Enter in data into ARRAY for
    for(i=0 ; i<ROW ; i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("Enter value for position [ %d ] [ %d ]:", i, j);
            scanf("%d", &array[i][j]);
        }
           
    }

    //Calculate and display sum of rows
    sum_row = array[0][0] + array[1][0] + array[2][0];

    printf("total of rows is %d \n", sum_row);
 
    //Calculate and display sum of columns 
    sum_col = array[0][1] + array[1][1] + array[2][1];
    
    printf("total of columns is %d \n", sum_col);

    greatest = array[0][0];

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(greatest < array[i][j])
            {
                greatest = array[i][j];
            }
        }
    }

    printf("Largest value is %d\n", greatest);

    return 0;

}
    
