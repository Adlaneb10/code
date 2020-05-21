/*Write a program that uses a function to print 10 stars (*) on a single
line. Ensure you declare your function prototype and include adequate comments.
Author: Adlane Boulmelh
Date: 06/02/2020 */
#include <stdio.h>
#define SIZE 10

//Function Signature
void stars(void);

int main()
{
    printf("This program will print 10 stars below\n");
    //Call function (Stars)
    stars();
    return 0;
}//End main
//Implement function stars to print 10 stars
void stars()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf(" * ");
    }//End for 
}//end void stars()
