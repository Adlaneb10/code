/* Write a program to input a number 1 to 7. Where 1 represents sunday, 2 monday, 3 tuesday, etc. Display
days of week corresponding to number, if number outside range entered display error.
Author: Adlane Boulmelh
Date: 14/10/2019
*/
#include <stdio.h>
int main()
{
    int daynum;
    
    printf("Enter a number between 1 to 7\n");
    scanf("%d", &daynum);

    switch(daynum)
    {       
        case 1: // Start case
        {
            printf("1 is Sunday");
            break;
        }//End case 1
        case 2:
        {
            printf("2 is Monday");
            break;
        }// end case 2
        case 3:
        {
            printf("3 is Tuesday");
            break;
        }// End case 3
        case 4:
        {
            printf("4 is Wednesday");
            break;
        }// End case 4
        case 5:
        {
            printf("5 is Thursday");
            break;
        }// End case 5
        case 6:
        {
            printf("6 is Friday");
            break;
        }// End case 6
        case 7:
        {
            printf("7 is Saturday");
            break;
        }//End case 7
        default:
        {// start default
            printf("error: Invalid entry");
        }// End Default
    }//End switch

    return 0;
} // End main