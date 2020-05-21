/* Program that reads a string from keyboard and uses seperate functions to do following.
* Count number of times a vowel occurs.
* Find number of characters in the string you entered (use a string function) use this number display the string in reverse.
* Concatenate the string you entered to the end of the following string and display the new string.
Char sentence[40] = "I entered the string"
Auhtor: Adlane Boulmelh
Date: 12/03/2020 */
#include <stdio.h>
#include <string.h>

//Function signatures
char vowelcount(char count[20]);
char charcount(char stringlength[20]);
char conc(char reverse);

int main()
{
    char string1[20];
    printf("Enter a string\n");
    gets(string1);
    //Call function to count vowels
    vowelcount(string1);
    charcount(string1);

}

char vowelcount(char count[20])
{
    int i;
    int vowels;
    
    for(i=0;i<20;i++)
    {
        if(count[i] == 'a' | count[i] == 'e' | count[i] == 'i' | count[i] == 'o' | count[i] == 'u')
        {
            vowels++;
        }//End if 
    }
    printf("\n there are %d vowels in this string", vowels);
    return vowels;

}

//Fins number of characters in string entered
char charcount(char stringlength[20])
{
    int charcounter;
    int i;
    for(i=0;i<20;i++)
    {
        if(stringlength[i] == 'a'| stringlength[i] = 'b','c','d','e','f','g','h','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z')
        {
            charcounter++;
        }
    }

    printf("\n%d", charcounter);


}