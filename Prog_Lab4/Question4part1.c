/* Rewrite following if else using a switch statement
Author: Adlane Boulmeh
Date: 14/10/2019
*/
#include <stdio.h>
int main()
{
    char martialStat;
    
    printf("Enter a code for your martial status\n");
    
    scanf("%1s", &martialStat);

    switch(martialStat)
    {
        case 's':
        {
            printf("single");
            break;
        }// Case for 's'
        case 'm':
        {
            printf("Married");
            break;
        }// Case for 'm'
        case 'w':
        {
            printf("widowed");
            break;
        }//Case for 'w'
        case 'e':
        {
            printf("seperated");
            break;
        }//Case for e
        case 'd':
        {
            printf("divorced");
            break;
        }//case for d
        default:
        {
            printf("error:invalid code");
        }//End default

    }//End switch

    return 0;

}//End main