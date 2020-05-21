#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char *text = "abcd";

    
    char *p = text;
    p += strlen(p) - 1; 
    while( text <= p)
    {
        puts(p--);
    }
    
    return 0;


}