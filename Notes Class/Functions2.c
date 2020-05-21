/*Program that uses parameters function 30/01/2020
*/
#include <stdio.h>
//#define NUMBER 5

//Function signature
void stars(int);
//Return data type //Function Name //Parameter list

int main()
{
    int number;    //Scope of function is the main or main function

    printf("How many stars to display?\n");
    
    scanf("%d",&number);

    //Call stars
    stars(number);
    getchar();

    return 0;
}//end main

//implement functions ---> stars()
void stars(int n1) //Scope is stars //n1 will contain copy from whats in number
{
    int i;
    for(i=0;i<n1;i++)
    {
        printf("*");
    }//End for loop
    getchar();
}//end stars