/* n.Write  a  program  that  uses  a  function  to  calculate the  most  commonly  used  character from  a  number  of  3characters  entered  by  a  user.
Your main() should read the 3 characters and these should be passed to your function. Your function should calculate the most common character of the 3
(assume the user enters  more  than one  occurrence  of  any  character).  This  character  should  then  be returned  to  the  main().  
Your  main()  should  then  display  this  character  with  an appropriate message
Author: Adlane Boulmelh 
Date: 13/02/2020 */
#include <stdio.h>

//function signature
char find_char (char, char, char); //for array char[]

int main()
{
    
    char ch1,ch2,ch3;
    char common;
    printf("Enter any three characters\n");
    scanf(" %1s", &ch1); //Avoids white space characters %c doesnt
    scanf(" %1s", &ch2);
    scanf(" %1s", &ch3);
    //Check common character
    find_char(ch1,ch2,ch3);
   // printf("\n most common character is %c", common);
    //putchar("\n most common character is %c", common); ---> putchar(ch); displays contents of variable

    return 0;
}
     
char find_char(char c1,char c2,char c3)
{
    if((c1==c2) || (c1==c3))
    {
        printf("\n most common character is %c", c2);
        
    }
    else 
    {
        putchar(c2);
        return c2;
    }
}