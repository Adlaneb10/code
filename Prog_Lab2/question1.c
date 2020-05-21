/*Program 1 calculate and display sum of integers 1 - 5 and Calculate and display average of following floating-point numbers: 1.0,1.1,1.2....2.0
Author: Adlane Boulmelh
Date: 30/09/2019
*/

#include <stdio.h>
int main()
{
    int sum1 = 1+2+3+4+5;
    
    printf("sum1 %d\n",sum1);
    
    // avegrage of floating point numbers
    
    float mean = (1.0+1.1+1.2+1.3+1.4+1.5+1.6+1.7+1.8+1.9+2.0)/11;
    
    printf("mean %f\n",mean);
    
    getchar();
    
    return 0;
}