/* Program that will perform security authorisation based on numeric codes. Codes will be four single
digit interger numbers between 0-9. Program will allow user user to enter any four digits or generate a random code.
The code will then be encrypted and compared to access code. Prompt user whether code is correct or incorrect.
Program is menu driven and contains 6 options. All menu options are implemented in a seperate funciton. All functions are
pass by reference and reading and writing from arrays are done using pointer notation only.
Auhtor: Adlane Boulmelh (C19367031)
Date: 03/04/2020 
Compiler & OS: MINGW64 Microsoft Visual Studio Windows 10
*/

//header files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//symbolic name for program
#define SIZE 4

//Structure to keep check of entries which are correct and incorrect 
struct code_counter 
{
    int correct_code;
    int wrong_code;
};

//global variables
//array for access code
//const function so elements in array cannot be changed
const int access_code[SIZE] = {4,5,2,3};
int user_entry[SIZE];
int correct_entry;
int incorrect_entry;
int checker = 0;
int encrypt_check = 0;
int decrypt_check = 0;
int encrypt_decrypt_check = 0;

//function signatures
int options1(int *ptr1);
int options2(int *ptr2);
int options3(int *ptr3);
int options4(int *ptr4);
int options5(int *ptr5);
int options6(int *ptr6);


int  main()
{
    int menu;
    time_t t;
    //Display greeting to user
    printf("\n \n Welcome to Security Authorisation!\n \n");
    //initialise random number generator
    srand((unsigned)time(&t));

    do
    {
        //List menu options to user
        printf("\n \nSelect one of the following options\n 1. Enter a code or generate a random code. \n 2. Encrypt code \n");
        printf("3. Check entry for access \n 4. Decrypt Code \n 5. Display number of times the encrypted code is correct or wrong\n ");
        printf("6. Exit program\n");

        //Scan for user input
        scanf(" %d", &menu);
        //clear buffer
        while(getchar() != '\n');

        //if statement to prevent invalid entry by user in menu
        if(menu > 6 || menu < 1)
        {
            //print out suitable error message
            printf("*ERROR* : Invalid Entry\n");
        }//end if 

        //call function signature to ask user for entry or random pin generator
        options1(&menu);
        //function to encrypt code
        options2(&menu);
       //function to check user entry against pin code
        options3(&menu);
        //function to decrypt code to standard input
        options4(&menu);
        //Function display number of times encrypted code is correct or wrong
        options5(&menu);
        //function to end program
        options6(&menu); 

        
    }
    while(menu != 6);
    getchar();

    return 0;
}

int options1(int *ptr1)
{
    //list variables in function
    int i;
    int temp;
    int innermenu = 0;
//display message to user

    switch(*ptr1)
    {
        case 1:
        {
            checker++;
            printf("\nSelect one of the following options.\n Press 1 to enter a code. \n Press 2 to generate a random code.\n");
            //increment checker to prevent user from  not entering option 1 first.
            scanf(" %d", &innermenu);

            if(innermenu == 1)
            {   
                printf("Enter four digits\n");
                //read in user entry
                for(i=0;i<SIZE;i++)
                {
                    scanf(" %d", &*(user_entry+i));
                }//end for

                for(i=0;i<SIZE;i++)
                {
                    if(*(user_entry + i) < 0 || *(user_entry + i) >9)
                    {
                        *(user_entry+i) = 0;
                    }//end inner if
                }
                
                break;
                
            }//end if

            //menu option 2 for inner menu
            if(innermenu == 2)
            {
                for(i=0;i<SIZE;i++)
                {
                    //random number generator for array
                    *(user_entry+i) = rand () %10;
                }
                
                printf("Your random code is \n");

                for(i=0;i<SIZE;i++)
                {
                    //prints out users random code
                    printf("[%d]", *(user_entry+i));
                }
                
            }//end if 

            //error checking if user enters a number other than 1 or 2
            else
            {
                printf("*ERROR* : Invalid entry.\n");
            }
            
            break;
            
        
        }//end case 1 
    }//End switch
}//end function options1


//function to encrypt user entry
int options2(int *ptr2)
{
    int i;
    int temp;
    int temp2;
    int temp3,temp4;
    

//Switch statement for menu 
    switch(*ptr2)
    {
        case 2:
        {
        //Check if user selected option 1 first
        if(encrypt_check == 0)
        {
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            if(checker >> 0)
            {
                
                printf("Encrypting your code...\n");
            
                //Algorithim to encrypt code
                //first number to temp
                temp = *(user_entry+0);
                //third to temp2
                temp2 = *(user_entry+2);
                *(user_entry + 0) = temp2;
                *(user_entry + 2) = temp;

                //Swap 2nd number with 4th  
                temp3 = *(user_entry + 1);
                temp4 = *(user_entry + 3);
            
                *(user_entry + 1) = temp4;
                *(user_entry + 3) = temp3;
                //to not allow user to encrypt again
                encrypt_check++;

                for(i=0;i<SIZE;i++)
                {
                    //add one to each number
                    *(user_entry+i) = *(user_entry + i) + 1;
                }

                for(i=0;i<SIZE;i++)
                {
                    if(*(user_entry + i) == 10)
                    {
                        //Change any value that will equal ten to have a zero
                        *(user_entry+i) = 0;
                    }
                }

                for(i=0;i<SIZE;i++)
                {
                    printf("[%d]", *(user_entry+i));
            
                }
                
                break;
            }//end if checker
        }//end encrypt_checker

        //to check if user already encrypted a code
        if(encrypt_check >> 0)
        {
            printf("You already encrypted this code\n");
        }//end if
        }//end case 2
    }//end switch

}//end function options2

//function to check whether users entry is correct to the access code
int options3(int *ptr3)
{
    int i;

    //switch statement for menu
    switch(*ptr3)
    {
        //check entry for access for user
        case 3:
        {
            //prevent user entering option 3 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }

            //check whether user entered a code
            if(checker >> 0)
            {
            
                //Check users entry to access code
                for(i=0;i<SIZE;i++)
                {
                    if(*(access_code + i) == *(user_entry + i))
                    {
                        i=3;
                        printf("Correct Code entered\n");
                        correct_entry++;
                    }//end if
                    else
                    {
                        i=3;
                        printf("Wrong Code entered\n");
                        //increment counter
                        incorrect_entry++;
                    }//end else
                    encrypt_check = 0;
                    break;
                }//end for
            }////end checker
        }//end case
    }//end switch
}//end function options3 

//function to decrypt users code
int options4(int *ptr4)
{
    int i;
    int temp;
    int temp2;
    int temp3;
    int temp4;
    

    switch(*ptr4)
    {
        //case 4 to decrypt code entered
        case 4:
        {
            // decrypt checker to only allow user to decrypt code once
            if(decrypt_check == 0)
            {
                if(checker == 0)
                {
                    printf("ERROR: You must select option 1 first\n");
                }//end if
                if(checker >> 0)
                {
                printf("Decrypting your code\n");
                //Algorithim to decrypt users code
          
                //for loop to prevent numbers being outside range
        
                for(i=0;i<SIZE;i++)
                {
                    //subrract 1 from each number
                    *(user_entry + i) = *(user_entry + i) - 1;
                    //if statement to check for -1 in array
                    if(*(user_entry + i) == -1)
                    {
                        //change value that is equal to -1 to 9
                        *(user_entry+i) = 9;
                        break;
                    }//end if 
                }//end for 

                //swap 1st num with 3rd num
                temp = *(user_entry+0);
                temp2 = *(user_entry+2);

                *(user_entry + 2) = temp;
                *(user_entry + 0) = temp2;

                //swap 2nd with 4th
               temp3 = *(user_entry + 1);
               temp4 = *(user_entry + 3);

               *(user_entry + 3) = temp3;
               *(user_entry + 1) = temp4;

                printf("\n");
                for(i=0;i<SIZE;i++)
                {
                    printf("[%d]", *(user_entry+i));
                }
                //increment decrpyt checker to prevent user to decrypt more than once
               decrypt_check++;
                }//end if checker
           }//end decrypt check
           break;
           if(decrypt_check >> 0)
           {
              printf("\nYou already decrypted this code\n");
              break;
           }//end if encrypt checker 
           

        }//end case 4

    }//end switch *ptr4

}//end function options4

//function to display number of times encrypted code is correct or wrong
int options5(int *ptr5)
{
    //call structure
    struct code_counter count;
    //store number of correct entries 
    count.correct_code = correct_entry;
    //store number of incorrect entries
    count.wrong_code = incorrect_entry;
    switch(*ptr5)
    {
        //case 5 to show results from session
        case 5:
        {
            //check if user selected option 1 first
            if(checker == 0)
            {
                printf("ERROR: You must select option 1 first\n");
            }
            if(checker >> 0)
            {
                printf("You entered the code correctly %d times and incorrectly %d times\n",count.correct_code, count.wrong_code);
                break;
            }//end if checker
        }//end case 5
    }//end switch
}//end function options5

//options6 function for ending the program
int options6(int *ptr6)
{
    switch(*ptr6)
    {
        //end program
        case 6:
        {   
            printf("Program has ended. Thank you!\n");
            return 0;
        }//end case 6
    }//end switch
}//end options6