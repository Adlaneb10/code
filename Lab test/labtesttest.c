/* Program that uses a function to convert 5 temps to from c To F
using F = ((C * 9) / 5) + 32 with the use of functions
Auhtor:Adlane Boulmelh
Date: 19/02/2020 
Compiler: Mingw Windows 10 */
#include <stdio.h>
#define SIZE 5
float avg;  
float avg1;

//Function signature
void convert_temp(float array[SIZE]);

void in_kelvin(float cel);

int main()
{
    //Variable names
    float array_main[SIZE];
    float read_cel;
    int i;
    //Ask user for input
    printf("Enter 5 temperatures in Celsius you wish to convert\n");
    //For loop to enter data in to array
    for(i=0;i<SIZE;i++)
    {
        scanf(" %f", &*(array_main + i));
    }//End for loop
    printf("Enter a temperature in celsius to convert to kelvin\n");
    
    scanf(" %.2f", &read_cel);
    //Call funtion
    convert_temp(array_main);
    
    in_kelvin(read_cel);
    
    printf("\nAverage temperature in celsius %.2f \n", avg);

    
    return 0;
}

void convert_temp(float array[SIZE])
{
    float farenheit_array[SIZE];
    float avg1;
    float total;
    int i;
    avg =avg1;
    for(i=0;i<SIZE;i++)
    {
        *(farenheit_array+i) = (*(array+i) * 9 / 5) + 32;
        printf("Temperature in Celsius %.2f & Temperature in Farenheit %.2f\n", *(array+i), *(farenheit_array+i));
        total = total + *(array+i);
        
    }//End for 
    avg = total/5;
    //printf("Average temperature in celsius %.2f \n", avg);
    

}//End function Convert_temp
// K = C + 273
void in_kelvin(float cel)
{
    float kelvin;
    kelvin = cel + 273;
    printf(" %.2f", kelvin);

}



