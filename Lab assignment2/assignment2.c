/* Program designed to implement a lottery game in C. Contain 6 menu options for user.
Each option performing a specific requirement. Store 6 numbers in a 1-D array.
Number of requirements which must be followed for this program
Each task dealt in a seperate function, with a simple menu displayed in the program.
USE POINTER NOTATION

Option 1 = Ask the user to enter 6 numbers 
including error checking and only allow the user to enter between 1-42 ALL NUMBERS DIFFERENT
option 2 = Display the numbers stored in the array to user
option 3 = Sort the numbers the user entered using bubble sort
option 4 = Compare entered numbers to winnning numbers and check if user won anything {1,3,5,7,9,11}
option 5 = Display frequency of entered numbers during session. 
option 6 = End program with suitable end message
Author: Adlane Boulmelh (C19367031)
Date: 19/02/2020 
Compiler used: Mingw
*/
#include <stdio.h>

// Symbolic names 

#define SIZE 6
#define TOTAL 42
//Global variables / array
int checker = 0;
int numberstore[SIZE] = {0,0,0,0,0,0};
int winnernums[SIZE] = {1,3,5,7,9,11};
int numberfreq[TOTAL] = {0};

//Function signature                
int options1(int select);//enter number
int options2(int select2);//Display selection
int options3(int select3);//Sort numbers in increasing order
int options4(int select4);//Compare your numbers with winning numbers
int options5(int select5);//display frequency of numbers entered throughout
int options6(int select6);

int main()
{   
    int menu;
    //Display greeting to user
    printf("\n \n Welcome to the Lottery!\n \n");

    do
    {
        //List menu options to user
        printf("\n \nSelect one of the following options\n 1. Enter any 6 numbers between 1-42 \n 2. Display numbers you have picked \n");
        printf("3. Sort numbers selected in increasing order \n 4. Compare your numbers with the winning numbers \n 5. Display frequency of entered numbers\n ");
        printf("6. Exit program\n");
        //scan in user input
        scanf(" %d", &menu);
//Clear buffer
        while(getchar() != '\n');
        //If statement to prevent invalid input by user
        if(menu > 6 || menu < 1)
        {
            printf("*Error* : Invalid Entry\n");
        }//end if

        //Call function for menu
        options1(menu);
        options2(menu);
        options3(menu);
        options4(menu);
        options5(menu);
        options6(menu);
        
    }
    while(menu !=6);
    getchar();

return 0;

}//End main

//Start function options1
int options1(int select)
{
    //Function variables
    int i;
    int j;
    int tmp; //Temporary varaible to store all input

        switch(select)
        {//Switch statement for menu interaction
            case 1:
            {
                checker++; // increment to prevent user from not entering option 1 first

                
                printf("Enter your 6 numbers\n");
                //For loop to read in user input into array
                for(i=0;i<SIZE;i++)
                {
                    //Scan numbers in to array
                    scanf(" %d,", &*(numberstore + i));
                    //Error checking
                    if(*(numberstore + i) >= 1 && *(numberstore + i) <= 42)
                    {
                        //check if user entered same number again inside array
                       for(j=0;j<i;j++)
                       {
                           if(*(numberstore+i) == *(numberstore + j))
                           {
                               //display suitable error message to user 
                               printf("*ERROR* with entry.\n Restarting game\n");
                               return 0; 
                           }//end inner if
                       }//end inner for loop 
                    
                    }//end if
  //Else used to check whether entry is outside the range, if so an error will be displayed and will break out the statement
                    else
                    {
                        //Error checking
                        printf("You must enter numbers between 1-42\n");
                        printf("Program will restart\n");
                        //Break out if error found
                        break;
                    }//end else
                    //Frequency counter for every number entered
                    tmp = *(numberstore + i);
                    *(numberfreq + tmp) = *(numberfreq + tmp) + 1;
                    
                }//End for
                break;
            }//End case 1
         }//End switch
       
}//End function 

int options2(int select2)
{
    int i,j;
    //Switch statement for different menu options
    switch(select2)
    {
        //Display numbers you picked
            case 2:
            {
                //Check if user selected option 1 first
                if(checker == 0)
                {
                    printf("ERROR: You must select option 1 first\n");
                }
                if(checker > 0)
                {
                   for(i=0;i<SIZE;i++)
                    {   
                        printf("Numbers entered");
                        for(i=0;i<SIZE;i++)
                        {
                            printf(" [%d] ", *(numberstore+i));
                        }
                    }
                
                                 
                }  //End if
                break;
                
                
            }//end case2
    }
}//End function options2 

int options3(int select3) //Bubble sort algorithim
{
    int i,j;
    int temp;
    switch(select3)
    {
        //option 3 in menu ( sorting algorithim )
        case 3:
        {   

            //Check if user selected option 1 first
            if(checker == 0)
            {
            
                printf("ERROR: You must select option 1 first\n");
                break;
            }
            
            //else statement to confirm user has done option1 first
            else
            {
                printf("Your numbers are being sorted...\n");
                //for loop to sort numbers
	            for(i=0; i<SIZE; i++)
	            {
		            for( j=0; j<SIZE-1; j++)
		            {
			            if( *(numberstore+j) > *(numberstore + j + 1) )
			            {
				            temp = *(numberstore + j);
				            *(numberstore + j) = *(numberstore + j + 1);
				            *(numberstore + j + 1) = temp;
			            }//End if statement
		            }//End inner for loop
	            }//End outer for loop
                break;
            }//End else statement
        }//end case 3
        
    }//End switch select2
}//End option 3 function

int options4(int select4)
{
    int i;
    int j;
    int wincount = 0;
    
    switch(select4)
    {
        case 4:
        {
          //Check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }//end if 
            else
            {
                printf("Your numbers are \n");
                
                //Print winning numbers and selected numbers
                for(i=0;i<SIZE;i++)
                {
                    printf(" [%d] ", *(numberstore+i));
                }//End for loop
                
                printf("\n");
                printf("\nWinning numbers are\n");
                
                //For loop to print winning number
                for(i=0;i<SIZE;i++)
                {
                    printf(" [%d] ", *(winnernums+i));
                }//End for loop

                //number of for loops to check for a winning number within array
                for(i=0;i<SIZE;i++)
                {
                    for(j=0;j<SIZE;j++)
                    {
                        if(*(numberstore+i) == *(winnernums + j))
                        {
                            //increment winning counter
                            wincount++;
                        }//End if 
                    }// end inner for loop
                }//End outer for loop

              //Wincounter to decide what user has won
                if(wincount == 3)
                {
                    printf("\nYou have won a cinema pass. Congrats!\n");
                }//If for cinema pass
                if(wincount == 4)
                {
                    printf("\nYou have won a weekend away. Congrats!\n");
                }//If for weekend away
                if(wincount == 5)
                {
                    printf("\nYou have won a new car. Congrats!");
                }//If for New car
                if(wincount == 6)
                {
                    printf("\nYou have won the jackpot. CONGRATS!!\n");
                }//If statement Jackpot

                //if statements when user only gets 0,1 or 2 numbers correct, Display losing message
                if(wincount == 0)
                {
                    printf("\nYou have not won. Try again\n");
                }
                if(wincount == 1)
                {
                    printf("\nYou have not won. Try again!\n");
                }
                if(wincount == 2)
                {
                    printf("\nYou have not won. Try again\n");
                }
                    
                 break;
            }//End else
        }//End case 4
        
    }//End switch
}//End option4 select3

int options5(int select5)
{
    //Display frequency of entered numbers
    switch(select5)
    {
        case 5:
        {
            int i;
          //Check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            //Else to print number frequency
            else
            {
                for(i=1;i<TOTAL+1;i++)
                {
                    printf("You have entered %d, %d times\n", i, *(numberfreq + i));
                }//End for loop
            }
            
             break;
        }//Case 5
        
    }//End switch
}//end function

int options6(int select6)
{
    //Switch statement for menu options
    switch(select6)
    {
        //End of program
        case 6:
        {
            printf("Program ended, Thank you!");
            return 0;
        }
        
    }//End switch

}//End function



