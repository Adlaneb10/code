/*Program 6 write a program to perform the following 15+10, 15-10,15*10,15/10,15%3
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    int add;
    int subtract;
    int multiply;
    float divide;
    float modulus;
    
    add = 15+10;
    subtract = 15-10;
    multiply = 15*10;
    divide = 15/10;
    modulus = 15%3;
    
    printf("add %d\n,subtract %d\n,multiply %d\n, divide %f\n, modulus %f\n",add,subtract,multiply,divide,modulus);
   
    getchar();

    return 0;

}