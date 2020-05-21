/* Program using Pointers and Arrays. Declare an integer (num1) a character char1 and 2 pointers ptr1 pointing at num1 and ptr2 pointing at char1
Author: Adlane 
Date: 25/11/2019 */
#include <stdio.h>
int main()
{
    int num1 = 6;
    char char1 = 'd';
    int *ptr1;
    char *ptr2;
    ptr1 = &num1;
    ptr2 = &char1;

    //Print contents and address of num1 and char1 (on seperate lines)
    printf("num1 contains %d and is located at %p\n", num1, &num1);
    printf("char1 contains %c and is located at %p\n", char1, &char1);

    //print contents of ptr1 and ptr2 
    printf("ptr1 contains %d and is located at %p\n",*(ptr1), &num1);
    printf("ptr2 contains %c and is located at %p\n", *(ptr2), &char1);

    return 0;
}