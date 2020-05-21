/* Program that asks user to enter 2 characters, display these on screen. Then change code and use %d instead of %c and see what happens.
and use %1s instead of %c in scanf()
Auhtor: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    char first;
    char second;

    printf("Enter your first character\n");
// Asks for the first character

    scanf("%1s", &first);

    printf("\n You entered %c", first);
    //prints the character you entered

    printf("\n Enter your second character\n");
    //Asks for second character

    scanf("%1s", &second);

    printf(" You entered %c", second);
    // prints second character

    return 0;
}
