/*Program 2- write a program to compute and display on seperate lines. Volume and Surface area.
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    //volume of box
    int height = 10;
    float length = 11.5;
    float width = 2.5;
    
    // Volume of a box is Length*width*height
    float volume = length*width*height;

    printf("volume %f\n",volume);
    
    
    //surface area of a box is 2lw + 2lh + 2wh
    float surfacearea = (2*length*width) + (2*length*height) + (2*width*height);
    printf("surfacearea %f\n",surfacearea);
    
    getchar();
    return 0;
}