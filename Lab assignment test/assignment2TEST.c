/* Program designed to implement a lottery game in C. Contain 6 menu options .
Author: Adlane Boulmelh (C19367031)
Date: 19/02/2020 
Compiler used: Mingw
*/
#include <stdio.h>
#define SIZE 6
#define TOTAL 42
int checker = 0;
int numberstore[SIZE] = {0,0,0,0,0,0};
int winnernums[SIZE] = {1,3,5,7,9,11};
//Function to read in all entries
int numberfreq[TOTAL] = {0};

//Function signature                //to return a variable from function to main do return (variable name);
int numdisp(int nums[SIZE]);
int inputread(int numbers_entered[SIZE]);
int options1(int select);//enter number
int options2(int select2);//Display selection
int options3(int select3);//Sort numbers in increasing order
int options4(int select4);//Compare your numbers with winning numbers
int options5(int select5);//display frequency of numbers entered throughout
int options6(int select6);

int main()
{   
    int menu;
    printf("\n \n Welcome to the Lottery!\n \n");
    //inputread(numberstore[SIZE]);
    do
    {
        printf("\n \nSelect one of the following options\n 1. Enter any 6 numbers between 1-42 \n 2. Display numbers you have picked \n");
        printf("3. Sort numbers selected in increasing order \n 4. Compare your numbers with the winning numbers \n 5. Display frequency of entered numbers\n ");
        printf("6. Exit program\n");
        scanf(" %d", &menu);

        while(getchar() != '\n');

        //Call function for menu
        options1(menu);
        options2(menu);
        options3(menu);
        options3(menu);
        options4(menu);
        options5(menu);
        if(menu != 1 | 2 | 3 | 4 | 5 | 6)
        {
            printf("**ERROR**");
        }
    }
    while(menu !=6);
    printf("Thank you. Goodbye now!\n");
    getchar();
    

return 0;

}//End main

int options1(int select)
{
    int i;
    int j;

        if(select == 1)
        {//Switch statement for menu interaction
            //case 1:
            //{
                checker++;
                printf("Enter your 6 numbers\n");
                for(i=0;i<SIZE;i++)
                {
                    //Scan numbers in to array
                    scanf(" %d,", &*(numberstore + i));
                    if(*(numberstore + i) >= 43)
                    {
                        printf(" Error: Invalid entry\n");
                    }
                    else if(*(numberstore + i) < 1)
                    {
                        printf(" Error: Invalid entry\n");
                    }
                }
             //   break;
           // }
            //Display numbers you picked
           

        }//End switch
        //numdisp(numberstore);
}//End function options

int options2(int select2)
{
    int i,j;
    if(select2 == 2)
    {
        //Display numbers you picked
            //case 2:
            //{
                //Check if user selected option 1 first
                if(checker == 0)
                {
                    printf("ERROR: You must select option 1 first\n");
                }
                if(checker == 1)
                {
                      
                    for(i=0;i<SIZE;i++)
                    {
                        if(*(numberstore+i) < 43 )
                        {   
                            printf("Numbers entered");
                            for(i=0;i<SIZE;i++)
                            {
                                printf(" [%d] ", *(numberstore+i));
                            }
                        }
                    }
               
                for(i=0;i<SIZE;i++)
                {
                    if(*(numberstore + i) <= 0)
                    {
                        printf("Error: Your initial entry consists of an invalid number, please re enter numbers\n ");
                        for(i=0;i<SIZE;i++)
                        {
                            *(numberstore + i) = 0;
                        }    
                    }
                    else if(*(numberstore + i) >= 43)
                    {
                        printf("Error: Your initial entry consists of an invalid number, please re enter numbers\n ");
                        for(i=0;i<SIZE;i++)
                        {
                            *(numberstore + i) = 0;
                        }    
                    }
                }   
                    
                   
                }  //End if
               // break;
                
            //}//end case2
    }
}//End function options2 

int options3(int select3) //Bubble sort algorithim
{
    if(select3 == 3)
    {
       // case 3:
        //{   
            //Check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            printf(" Sorting numbers...\n");
            int i,j;
            int temp;
	        for(i=0; i<SIZE; i++)
	        {
		        for( j=0; j<SIZE-1; j++)
		        {
			        if( *(numberstore+j) > *(numberstore + j + 1) )
			        {
				        temp = *(numberstore + j);
				        *(numberstore + j) = *(numberstore + j + 1);
				        *(numberstore + j + 1) = temp;
			        }
		        }
	        }
           // break;
        //}//end case 3
    }//End switch select2
}//End option 3 function

int options4(int select4)
{
    int i;
    int j;
    int wincount = 0;
    
    if(select4 == 4)
    {
        //case 4:
        //{
          //Check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            printf("Your numbers are \n");
            //Print winning numbers and selected numbers
            for(i=0;i<SIZE;i++)
            {
                printf(" [%d] ", *(numberstore+i));

            }
            printf("\n");
            printf("\nWinning numbers are\n");
            //For loop to print winning number
            for(i=0;i<SIZE;i++)
            {
                printf(" [%d] ", *(winnernums+i));
            }

            //number of for loops to check for a winning number within array
            for(i=0;i<SIZE;i++)
            {
                for(j=0;j<SIZE;j++)
                {
                    if(*(numberstore+i) == *(winnernums + j))
                    {
                        //increment winning counter
                        wincount++;
                    }
                }
            }//End for loop

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

                //if statements when user only gets 1 or 2 numbers correct, Display losing message
                if(wincount == 1)
                {
                    printf("\nYou have not won. Try again!\n");
                }
                if(wincount == 2)
                {
                    printf("\nYou have not won. Try again\n");
                }
                    
           // break;
        //}//End case 4}
    }
}//End option4 select3

int options5(int select5)
{
    //Display frequency of entered numbers
    if(select5 == 5)
    {
        //case 5:
        //{
            int i;
          //Check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            else
            {
                for(i=0;i<TOTAL;i++)
                {
                    *(numberfreq + i) = *(numberstore + i);
                }
                for(i=0;i<TOTAL;i++)
                {
                printf("You have entered %d, %d times\n", *(numberfreq + i));
                }
            }
            
           
          //  break;
    }
        
}



