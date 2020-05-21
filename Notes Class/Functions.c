/*Program that uses a function
*/
#include <stdio.h>
#define NUMBER 5

//Function signature
void stars(void);
//Return data type //Function Name //Parameter list

int main()
{
    printf("Before function call \n");
    //Call stars()
    stars();
    printf("\n After function call");

return 0;
}//End main

//Implement functions
void stars()
{
    int i;
    for(i=0;i<NUMBER;i++)
    {
        printf("*");
    }//End for
}//End Void(stars)