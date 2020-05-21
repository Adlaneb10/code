/* Program that uses switches
Author: Adlane Boulmelh
Date: 09/10/2019
*/

#include <stdio.h>
int main()
{
    char my_op;

    printf("Enter a mathematical operator\n");

    scanf("%1s", &my_op);

    switch(my_op)
    {
        case '+':
        {
            printf("You entered a plus\n");
            break;
        }    
        case '-':
        {
            printf("You entered a minus\n");
            break;
        }
        case '*':
        {
            printf("You entered a multiply\n");
            break;
        }
        case '/':
        {
            printf("You entered a divide\n");
            break;
        }
        default:
        {
            printf("invalid operator entered\n");
        } // End switch
    }
    return 0;
} //End main