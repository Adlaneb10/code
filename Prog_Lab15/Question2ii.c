/* Program to read input to string array
Author: Adlane Boulmelh
Date: 27/02/20 */
#include <stdio.h>
#define SIZE 10
int main()
{
    char name[SIZE];
    int i;
    printf("Enter your name\n");
    gets(name);
    for(i=0;i<SIZE;i++)
    {
    printf("%c ", name[i]);
    printf(" ");
    }
    return 0;
}