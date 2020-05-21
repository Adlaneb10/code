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
    int options = 0;
    int question1 = 0;
    //int question2;
    //int question3;
    //float option4;
    //int NumberQs;
    int question_amount;
    int i = 1;

    
    do
    {
    
        printf("Welcome to the maths quiz, select one of the options\n");
    
        printf("Press 1 to select how many questions you would like to be asked. (Max 5)\n");

        printf("Press 2 to play the quiz\n");

        printf("Press 3 to restart quiz\n");

        printf("Enter 4 to exit\n");

        scanf("%d", &options);
            switch(options)
            {// start switch
                case 1: //Start case1
                {
                    
                    printf("How many questions would you like to be asked?\n", );
                    scanf("%d", &question_amount);
                        
                        if(question_amount = 1)
                        {// if block, Case1
                            printf("What is 5+10?\n");
                            scanf("%d", &question1);
                                if(question1 = 15)
                                {
                                    printf("You answered correctly\n");
                                }
                                else(question1 != 15);
                                {
                                    printf("Incorrect answer. Correct answer is 15.");
                                }
                        
                        }//End if block case 1
                    break;
                }//End case1
            }//End switch
        i++;
    }//End do
    while(i = 5);
    
    return 0;
}