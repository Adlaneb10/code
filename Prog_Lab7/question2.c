/* Write a program that uses a 3x2 (2-D) array. Your program must do the following:
a) Enter values into array
b) Display values in array
c) Find smallest and largest value and display these
d) Calculate average of the values and display this
Author: Adlane Boulmelh
Date:11/11/2019
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int value, smallest, largest, average, i, j, total = 0;
    
    for( i = 0;i< ROW; i++)
    {
        for( j = 0; j<COL; j++)
        {
            printf("Enter value for position [ %d ] [ %d ]:", i, j);
            scanf("%d", &value);
            array[i][j] = value;
            total += value;
        }
    }

    average = total/ (ROW * COL);
    smallest = array[0][0];
    largest = array[0][0];

    for( i =0; i<ROW; i++)
    {
        for( j = 0; j<COL; j++)
        {
            printf("Value @ position [ %d ][ %d ]: %d\n", i, j, array[i][j]);
        }
    }

    for( i = 0; i<ROW; i++)
    {
        if(smallest > array[i][j])
        {
            smallest= array[i][j];
        }

        if(largest < array[i][j])
        {
            largest = array[i][j];
        }
    }

    printf("Smallest value: %d\n Largest value: %d\n", smallest, largest);
    printf("Average is %d\n", average);

    flushall;
    getchar();


    
    return 0;
}