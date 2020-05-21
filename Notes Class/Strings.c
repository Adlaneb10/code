/*Strings notes class 19/02/2020 */
#include <stdio.h>
int main()
{

    char greeting[6] = {'H','E','L','L','O','\0'};

printf("Hello"); //String displays to standard output

printf(" \" I can program \", she said.\n");

printf("\" C: \\ is the root drive \", he said\n");

printf("\"\\ \" is an example\" \a"); //Escape character is /* \ */

int i;
for(i=0;i<1;i++)
{
    printf(" %10s \n",greeting); //Use %s for strings when printing them
}
puts("\nhello");
puts(greeting); //print string greeting
getchar();
fflush;
return 0;
}