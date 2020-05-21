#include <stdio.h>
#define SIZE 12
int main()
{
    char *months[SIZE] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int i;

    for(i=0;i<SIZE;i++)
    {
        printf("%s ", *(months+i)); // or months[i]
    }

    return 0;
}