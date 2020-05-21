#include <stdio.h>
int main()
{
    //initialising a string
    char greeting[6] = {'H','E','L','L','O'};

    char *ptr;
    ptr = "Hello";
    //char *ptr = "Hello"

    printf("%c", *ptr);
    //printf("%p", *ptr);

return 0;
}