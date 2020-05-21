/* Program that uses a function to convert currencies, using functions
Auhtor:Adlane Boulmelh
Date: 19/02/2020 
Compiler: Mingw Windows 10 */
#include <stdio.h>
#define SIZE 3
float avg_euro;
float avg_dollar;
float avg2;
float avg;

//Function signature
void change_to_euro(float array1[SIZE]); //converts us dollars to euro
void change_to_dollar(float array2[SIZE]); //Converts euro to USD
int main()
 {
     //Variable names
        float array1_main[SIZE]; //USD to euro
        float array2_main[SIZE]; //Euro - USD
        int i;
        float total;
        float avg;
        int options;
     do
     { 
        
        //Display prompt for user and read input from user
        
        printf("\n Welcome to currency converter \n Press 1 to convert US dollars to Euro \n Press 2 to convert Euro to US dollars\n Press 3 to exit\n"); 
        scanf(" %d", &options);

        switch(options)
        {
            case 1:
            {
             // switch statement for usd to eur
                printf("1$ = €0.84\n");
                printf("Enter 3 amounts you would like to convert USD to EURO\n");
            
                for(i=0;i<SIZE;i++)
                {
                    scanf(" %f", &*(array1_main+i));
                }
                    printf("You entered %.2f , %.2f , %.2f \n ", *(array1_main+0), *(array1_main+1), *(array1_main+2));
            //call function to convert currency
                change_to_euro(array1_main);
                printf("Your total average exhange is € %.2f\n", avg_euro);

                break;
            
            }//End case 1

            case 2:
            {
            // Euro to dollars
                 printf("1€= $1.19\n");
                printf("Enter 3 amounts you would like to convert from EURO to USD\n");
                //Scan user input
                for(i=0;i<SIZE;i++)
                {
                    scanf(" %f", &*(array2_main+i));
                }
                    printf("You entered in euros %.2f , %.2f , %.2f \n ", *(array2_main+0), *(array2_main+1), *(array2_main+2));
                //call function to convert currency
                change_to_dollar(array2_main);
                printf("Your total average exhange is $ %.2f\n", avg_dollar);
                break;
            
            }//End case 2
    
            default:
            {
                printf("Error invalid entry\n");
            }//End error checks default
        
        }//End switch
     }//End do
    
     while( options != 3);
     printf("Program ended thank you\n");

 return 0;
 }//End main

 void change_to_euro(float array1[SIZE])
 {
     float convert[SIZE];
     float avg2;
     float total;
     int i;
      //For loop to pass data from array and to calculate exchange
     for(i=0;i<SIZE;i++)
     {
         //printf("%f,", *(array1+i));
         //1$ = €0.84
         *(convert + i) = *(array1+i) * 0.84;


     }//End for 
    for(i=0;i<SIZE;i++)
    {
    printf("Your exchange is worth € %.2f\n", *(convert + i));
    }//End for

    //Calculation
     total = *(convert+0) + *(convert+1) + *(convert+2);
    avg2 = total / SIZE;
    avg_euro = avg2;
    for(i=0;i<SIZE;i++)
    {
        printf("Your original amount $%.2f & your new amount € %.2f\n", *(array1 + i), *(convert+i));
    }//End for
    
    
    
 }//End function change to euro

 //function to implement currency calculations
 
 void change_to_dollar(float array2[SIZE])
 {
     float convert2[SIZE];
     float total;
     float avg;
     int i;
    
     //For loop to pass data from array and to calculate exchange
    for(i=0;i<SIZE;i++)
     {
        *(convert2+i) = *(array2+i) * 1.19;
     }
     //For loop to show user exhange amount
    for(i=0;i<SIZE;i++)
    {
    printf("Your exchange is worth $ %.2f\n", *(convert2 + i));
    }
    //Calculations
    total = *(convert2+0) + *(convert2+1) + *(convert2+2);
    avg = total / SIZE;
    avg_dollar = avg;
    for(i=0;i<SIZE;i++)
    {
        printf("Your original amount $%.2f & your new amount € %.2f\n", *(array2 + i), *(convert2+i));
    }
 }//end function change to dollar