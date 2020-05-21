/* Human heart beat is 75 bpm, ask users age in years and calculate number of beats user has made so far in their life
Author: Adlane Boulmelh
Date: 07/10/2019
*/
#include <stdio.h>
int main()
{
    float age;
    int bpm;
    int totalbeats;
    
    bpm = 75;

    printf("Enter your age\n");

    scanf("%f", &age);

    totalbeats = bpm * 60 * 24 * 365 * age;

    printf("%d", totalbeats);
    

    
    return 0;
} 