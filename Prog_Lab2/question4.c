/*Program 4 write a program that uses modulus operator, i.e. % and display remainder of 2%2, 3%2, 5%2, 7%3, 100%33, 100%7
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    int first = 2%2;
    int second = 3%2;
    int third = 5%2;
    int fourth = 7%3;
    int fifth = 100%33;
    int sixth = 100%7;
    
    printf("first %d\n,second %d\n,third %d\n, fourth %d\n,fifth %d\n,sixth %d\n",first,second,third,fourth,fifth,sixth);
    
    getchar();
    return 0;
}