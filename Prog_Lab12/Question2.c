/*Write  a  program  that  uses a  function  with  2  parameters  (a  character  and  an  integer, e.g. function_name(char,  int). 
 Your  function  must  display  the  character  parameter  a certain  number  of  times  on  one  line  where  this  number  is  the  integer  parameter. 
For example, if your function is function_name(*,5)it will display *****.
Author: Adlane Boulmelh
Date:06/02/2020 */
#include <stdio.h>

//Function signature
void display(char character,int number);
int main()
{
    char inputchar;
    int repeat;
    printf("Please enter a character\n");
    scanf("%c", &inputchar);
    printf("How many times to repeat?\n");
    scanf("%d", &repeat);
    //Call function
    display(inputchar, repeat);
return 0;
}//End main

//Function that prints a given character, a chosen number of times
void display(char character, int number)
{
    int i;
    for(i=0;i<number;i++)
    {
        printf("%c",character);
    }//end for
}//End function display