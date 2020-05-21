/*Write a program that uses 2 float variables called input1and input2. 
Enter values for these variables. Using pointers(called ptr1and ptr2)
, your program should do the following.
A) print address of input 1 and input 2
B) print address of ptr1 and ptr2 
C) make ptr1 and ptr2 point to input 1 and input 2, print contents of ptr1
and ptr2(Out put should be same as addresses of input 1 2)
D) use dereference to print contents of address stored in ptr1,2
Author: Adlane 
Date: 30/11/2019 */
#include <stdio.h>
int main()
{
    float input1 = 4.5;
    float input2 = 2.5;
    float *ptr1;
    float *ptr2;
    ptr1 = &input1;
    ptr2 = &input2;
    
    printf("input1 is located at %p \n input2 is located at %p \n", &input1, &input2);

    printf("ptr1 is located at %p \n ptr2 is located %p \n", &*(ptr1), &*(ptr2));

    printf("ptr1 contains %f and ptr2 contains %f", *ptr1, *ptr2);

    return 0;
}