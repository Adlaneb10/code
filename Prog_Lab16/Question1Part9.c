/* Write a program to ask a user for their name, compare name with a list of names
held in an array in memory. IF users name in list, display a greeting else display
"name not found" 
Auhtor: Adlane Boulmelh
Date: 05/03/2020 
*/
#include <stdio.h>
int main()
{
    char names[] = {'B','e','n'};
    char check[] = {};
    int i;
    puts("Enter your name\n");
    gets(check);
    for(i=0;i<3;i++)
    {
        if(names[i] == check[i])
        {
            printf("Hello there\n");
        }
        else
        {
            printf("Name not found\n");
        }
        
    }
    return 0;
}