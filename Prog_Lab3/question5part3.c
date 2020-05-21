/* Write a program to input 4 numbers and display them in reverse order
Author: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    int first;
    int second;
    int third;
    int fourth;

    printf("Enter 4 numbers\n");

    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", &fourth);

    printf(" You entered %d\n",fourth);
    printf("%d\n", third);
    printf("%d\n", second);
    printf("%d\n", first);

    return 0;
}