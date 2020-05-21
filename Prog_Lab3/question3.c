/* Ask user to enter 3 float numbers(With decimals), Display the first correct to 4 decimal places, second correct to 3 decimal places and third with no decimal places
Author: Adlane Boulmelh
Date: 07/10/2019
*/

#include <stdio.h>
int main()
{
    float first;
    float second;
    float third;

    printf("Enter your first float number\n");

    scanf("%f", &first);

    printf("You entered\n %.4f", first);


    printf("\n Enter your second float number\n");

    scanf("%f", &second);

    printf("You entered\n %.3f", second);

    
    printf("\n Enter your third float number\n");

    scanf("%f", &third);

    printf("You entered\n %.0f", second);


    return 0;
}