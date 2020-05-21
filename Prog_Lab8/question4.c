/* Error checking question 4 Lab 8
Author: Adlane
Date: 23/11/2019
*/

#include <stdio.h>
int main()
{
    // code
    int var1;
    int *ptr;
    var1 = 1;
    ptr= &var1;
    
        printf("the address of var1 is %p\n", &var1); 
        printf("ptr contains %p\n", &ptr);
        printf("*ptr contains %d\n", *ptr);

    return 0;
}