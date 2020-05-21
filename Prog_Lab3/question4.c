/* Write a program similar to Q2, This time use getchar() and putchar() functions to read characters from keyboard and output them to screen
Author: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    char first;
    char second;

    printf("Enter your first character\n");
// Asks for the first character

    first = getchar();

    putchar(first);
    //prints the character you entered

    printf("\n Enter your second character\n");
    //Asks for second character

    second = getchar();

    putchar(second);
    // prints second character

    return 0;

}