/*Extern variables
(extern int num;)
Extern variables are very similar to global variables.
*/
//Example of use of extern variable
#include <stdio.h>

//Function signature
void fxn(void);
int main()
{
    printf("Inside main\n");
//Call function
    fxn();
return 0;
}//End main

void fxn()
{
    extern int num;
    printf("\n inside fxn\n");
    num++;
    printf("\n num is %d\n", num);

}//End function