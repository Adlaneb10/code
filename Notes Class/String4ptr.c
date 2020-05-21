#include <stdio.h>
int main()
{
    char *ptr = "Hello";
    //display the string
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        //if no increment then infinite loop
        ptr++;
    }
    return 0;
}