/*Using a switch statement, write a program that asks the user to enter a character from the keyboard and displays a message whether the character is a vowel or not
(a, e, i, o, u)
Author: Adlane Boulmelh
Date: 14/10/2019
*/
#include <stdio.h>
int main()
{
    char vowel;

    
    printf("Enter a character\n");

    scanf("%1s", &vowel);

    switch(vowel)
    { //Start of switch
        case 'a':
        {
            printf("You entered a vowel\n");
            break;
        }// End first Case
        case 'e':
        {
            printf("You entered a vowel\n");
            break;
        }// End second case
        case 'i':
        {
            printf("You entered a vowel\n");
            break;
        }// End third case
        case 'o':
        {
            printf("You entered a vowel\n");
            break;
        }// End fourth case
        case 'u':
        {
            printf("You entered a vowel\n");
            break;
        } // End fifth case

        default:
        {
            printf("You didn't enter a vowel\n");
        } // End default
    
    }// End switch

    return 0;

}// End main