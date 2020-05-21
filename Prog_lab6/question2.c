/*Write a program using an array that will allow the user to input 3 temperature readings in Fahrenheit. 
After all the temperatures havebeen read from the keyboard, 
display each of these temperatures on the screen andits corresponding temperature in Celsius.
Use the following formula to convert from Fahrenheit to Celsius
:Celsius = (Fahrenheit -32.0) * (5.0 / 9.0)
Auhtor:Adlane 
Date: 10/11/2019
*/
#include <stdio.h>
int main()
{
    float farenheit[5];
    float celsius[5];
    int i;
    int j;
    int k;
    int t;

    printf("Enter five temperatures in Farenheit\n");
    

    for ( i = 0; i < 5; i++)
    {
        scanf("%f", &farenheit[i]);
        
        //printf("%d\n", farenheit[i]);
    }

        

    for( j=0; j<5; j++ )
    { 
     printf("You entered %.4f in farenheit\n", farenheit[j]);
    
     //celsius[j] = (farenheit[j] + 1);  //
    }
    
    for(k=0;k<5;k++)
    {
    celsius[k] = (farenheit[k] - 32.0)*(5.0/9.0); 

    printf("Temp in celsius is %.4f\n", celsius[k]);

    }
    
    flushall;
    getchar();
    
    return 0;
}