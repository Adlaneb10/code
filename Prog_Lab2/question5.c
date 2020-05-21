/*Program 5 calc and display volume of a cube. length of all sides is 2.8 cm
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    float side = 2.8;
    float area = side*side;
    float cubevolume = area*area*area;
    
    printf("volume of cube: %f\n",cubevolume);
    getchar();
    return 0;
}