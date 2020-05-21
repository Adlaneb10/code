/* Program Maths quiz
1. Enter the number of questions to be asked for this round of the quiz
(maximum of 5 questions allowed).
3. Display the number of questions that were answered (i) correctly and (ii)
incorrectly for this round.
4. Exit Program
Auhtor: Adlane Boulmelh
Date: 22/10/2019
Compiler and OS: Microsoft Visual studio code and Windows 10
*/


#include <stdio.h>


int main()
{   // start main
    
    //List of variables used in program

    int options;
    int question1 = 15;
    int question2 = 8;
    int question3 = 4;
    int question_amount = 0;
    int counter_Correct = 0;
    int counter_wrong = 0;


    do //Do block
    {
    
        // Quiz menu options    
        printf("\n\nWelcome to the maths quiz, select one of the options\n\n");
    
        printf("Press 1 to select how many questions you would like to be asked and to start the quiz. (Max 3)\n");

        printf("Press 2 To start the quiz\n");

        printf("Press 3 to restart quiz\n");

        printf("Enter 4 to exit\n");

        scanf("%d", &options);

        //Read buffer characters and discards them
        
        while(getchar() != '\n');
           
            //Main switch statement
            
            switch(options)
            { 

                case 1:
                case 2:
                {  // Start Case 1 and 2
                
                    printf("How many questions would you like to be asked?\n", question_amount);

                    scanf("%d", &question_amount);
                    
                    while(getchar() != '\n');
                    
                    //Switch inner statement for selection of how many questions asked.

                    switch(question_amount)
                    {
                        
                        //Case of each question amount selection (Max of 3)
                        case 1:
                        
                        {
                        
                            printf("what is 5 + 10=?\n", question1);

                            scanf("%d", &question1);
                            
                            while(getchar() != '\n');
                            
                            if(question1 == 15) 
                            {
                                
                                printf("Correct answer\n\n");
                                counter_Correct++;
                            
                            }// End if block Case 1
                            
                            else
                            {
                            
                                printf("incorrect! Answer is 15\n\n");
                                counter_wrong++;
                            
                            }//End else block case 1
    	                    
                            printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                            break;
                           
                        }//End case 1
                        
                        case 2:
                        {
                            printf("What is 5+10=?\n",question1);
                            scanf("%d", &question1);
                            while(getchar() != '\n');
                        
                            if(question1 == 15)
                            {
                            
                                printf("Correct answer\n\n");
                                counter_Correct++;
                            
                            }//End if block case 2 Part1
                        
                            else
                            {
                            
                                printf("incorrect! Answer is 15\n\n");
                                counter_wrong++;
                            
                            }//End else block case 2 Part1

                            printf("what is 4+4=?\n");
                            scanf("%d", &question2);
                            while(getchar() != '\n');
                        
                            if(question2 == 8)
                            {
                            
                                printf("Correct answer!\n\n");
                                counter_Correct++;
                            
                            }//End if block case 2 Part2
                        
                            else
                            {
                            
                                printf("incorrect!, Answer is 8\n\n");
                                counter_wrong++;
                            
                            }//End else block case 2 Part2
                        
                            printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                            break;
                        
                        }// End case 2
                        
                        case 3: //3 questions to ask
                        {
                             printf("What is 5+10=?\n");
                            scanf("%d", &question1);
                            while(getchar() != '\n');
                        
                            if(question1 == 15)
                            {
                                
                                printf("Correct answer!\n\n");
                                counter_Correct++;
                            
                            }//End if block case 3 Part1
                        
                            else
                            {
                            
                                printf("incorrect!, Answer is 15\n\n");
                                counter_wrong++;
                            
                            }//End else case 3 Part1 

                            printf("what is 4+4=?\n");

                            scanf("%d", &question2);
                            
                            while(getchar() != '\n');
                        
                            if(question2 == 8)
                            {
                                
                                printf("Correct answer!\n\n");
                                counter_Correct++;
                            
                            }//End if block case 3 Part2
                        
                            else
                            {
                            
                                printf("incorrect!, Answer is 8\n\n");
                                counter_wrong++;
                            
                            }//End else block case 3 Part2

                            printf("what is 3+3=?\n");

                            scanf("%d", &question3);
                            
                            while(getchar() != '\n');
                        
                            if(question3 == 6)
                            {
                            
                                printf("Correct answer!\n\n");
                                counter_Correct++;
                            
                            }//End if block case 3 Part3
                        
                            else
                            {
                                
                                printf("Incorrect! Answer is 6\n\n");   
                                counter_wrong++;
                            
                            }//End else block case 3 Part3
                        
                            printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                        
                            break;
                            
                        
                        }// End case 3
                        
                        default:
                        {
                            printf("error: invalid entry\n\n");
                        }
                    }// End switch inner
                
                }//End case 1,2 statement
                
                case 3:
                {
                    printf("Resetting quiz...\n\n");
                }

                case 4:
                {                
                    printf("Program has ended\n");
                    break;
                }
                
                //Error checking
                
                default:
                {
                    printf("error: Invalid entry. Please select a number between 1-4.\n", options);
                }//End defualt   

                    
            }//End switch MAIN
            
        
        // resets counter after each round

        counter_wrong = 0;
        counter_Correct = 0;   

    }//End do
    
    //Loops if options is not equal to 4 and Ends program if 4 is selected
    
    while(options != 4);

    
    return 0;

}// End main 