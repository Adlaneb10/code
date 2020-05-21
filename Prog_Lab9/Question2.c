/* Modify program from Q1 (a) Declare third int point ptr3 intialise to char1 Does it compile?
(b) Using dereference operator print contents of address stored in ptr3 with
%d and %c, is there a difference, explain difference with comment
Author: Adlane 
Date: 30/11/19 */
#include <stdio.h>
int main()
{
    int num1 = 6;
    char char1 = 'd';
    int *ptr1;
    char *ptr2;
    int *ptr3;
    ptr1 = &num1;
    ptr2 = &char1;
    ptr3 = &char1;

    //Print contents and address of num1 and char1 (on seperate lines)
    printf("num1 contains %d and is located at %p\n", num1, &num1);
    printf("char1 contains %c and is located at %p\n", char1, &char1);
    printf("ptr3 contains %d and is located at %p\n", char1, &char1);

    //print contents of ptr1 and ptr2 
    printf("ptr1 contains %d and is located at %p\n",*(ptr1), &num1);
    printf("ptr2 contains %c and is located at %p\n", *(ptr2), &char1);
    printf("ptr3 contains %d and is located at %p\n", *(ptr3), &char1);

/*%d shows us ptr3 contains 1636 and %c shows us the same contents as originalchar1 */

    return 0;
}