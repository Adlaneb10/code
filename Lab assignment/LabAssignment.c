/* Program Maths quiz
1. Enter the number of questions to be asked for this round of the quiz
(maximum of 5 questions allowed).
2. Start quiz
3. Display the number of questions that were answered (i) correctly and (ii)
incorrectly for this round.
4. Exit Program
Auhtor: Adlane Boulmelh
Date: 22/10/2019
Compiler and OS: Microsoft Visual studio code and Windows 10
*/
#include <stdio.h>

int main()
{// start main
    
    //List of variables
    int options;
    int question1 = 15;
    int question2 = 8;
    int question3 = 4;
    int question_amount;
    int i =0 ;
    int counter_Correct = 0;
    int counter_wrong = 0;


    do //Do block
    {
    
        // Quiz question options    
        printf("\n\nWelcome to the maths quiz, select one of the options\n\n");
    
        printf("Press 1 to select how many questions you would like to be asked and to start the quiz. (Max 3)\n");

        printf("Press 3 to restart quiz\n");

        printf("Enter 4 to exit\n");

        scanf("%d,", &options);
           
           
            if(options == 1)
            {// start if MAIN
                
                    printf("How many questions would you like to be asked?\n", question_amount);
                    scanf("%d", &question_amount);
                    switch(question_amount)
                    {
                        case 1:
                        {
                            printf("what is 5 + 10=?\n", question1);
                            scanf("%d", &question1);
                            if(question1 == 15)
                            {
                                printf("Correct answer\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("incorrect! Answer is 15\n");
                                counter_wrong++;
                            }
    	                    printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                            break;
                           
                        }//End case 1 question 1
                        case 2:
                        {
                            printf("What is 5+10=?\n",question1);
                            scanf("%d", &question1);
                            if(question1 == 15)
                            {
                                printf("Correct answer\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("incorrect! Answer is 15\n");
                                counter_wrong++;
                            }

                            printf("what is 4+4=?\n");
                            scanf("%d", &question2);
                            if(question2 = 8)
                            {
                                printf("Correct answer!\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("incorrect!, Answer is 8\n");
                                counter_wrong++;
                            }//End else block case
                            printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                            break;
                        }
                        case 3: //3 questions to ask
                        {
                             printf("What is 5+10=?\n");
                            scanf("%d", &question1);
                            if(question1 == 15)
                            {
                                printf("Correct answer\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("incorrect!, Answer is 15\n");
                                counter_wrong++;
                            }//End else case 3 q1

                            printf("what is 4+4=?\n");
                            scanf("%d", &question2);
                            if(question2 == 8)
                            {
                                printf("Correct answer!\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("incorrect!, Answer is 8\n");
                                counter_wrong++;
                            }//End else block case 3 q2

                            printf("what is 2+2=?\n");
                            scanf("%d", &question3);
                            if(question3 == 4)
                            {
                                printf("Answer is correct!\n");
                                counter_Correct++;
                            }
                            else
                            {
                                printf("Incorrect! Answer is 4\n");
                                counter_wrong++;
                            }//End else block case 3 q3
                            printf("You answered %d correct and %d incorrect.\n", counter_Correct, counter_wrong);
                            break;
                            
                        }// case 3
                        default:
                        {
                            printf("error: invalid entry\n");
                        }
                    }
            }//End if statement
                
                if(options == 3)
                {
                    printf("You pressed 3 to restart the quiz!\n");
                }// End if block options = 3
                
                if (options ==4)
                {
                
                    printf("Program has ended\n");
                }//End if block options = 4
                else if (options != 1,3,4)
                {
                    printf("error: Invalid entry.\n");
                }//End else block    
            
        
        // resets counter after each round

        counter_wrong = 0;
        counter_Correct = 0;   

    }//End do
    
    //Loops if options is not 4 and Ends program if 4 is selected
    while(options != 4);

    
    return 0;
}// End main