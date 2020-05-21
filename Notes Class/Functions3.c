/*Program uses parameter functions
This time asking user what character they want to use and how many times 30/01/2020 */
#include <stdio.h>

void stars(int,char);

int main()
{
    int number;
    char my_char;

    printf("How many characters to display?\n");
    scanf(" %d",&number);

    printf("Enter character to display\n");
    scanf(" %c",&my_char);

    //call function
    stars(number,my_char); //Follow the order specified
    return 0;
}//End main
//Implement functions, Function stars is used to print number of characters and what character
void stars(int n1, char ch)
{
    int i;
    for(i=0;i<n1;i++)
    {
        printf("%c",ch);
    }//end for
}//End stars