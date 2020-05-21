/*Write a program to display how a character array is displayed (char my_word[])
Author: Adlane Boulmelh
Date: 27/02/2020 */
#include <stdio.h>
#define SIZE 5
int main()
{
    char my_word[SIZE] = {'H','e','l','l','o'};
    
    puts(my_word);
    printf("%s", my_word);
    for(int i=0;i<SIZE;i++)
    {
    printf("%c", my_word[i]);
    }
    return 0;
}