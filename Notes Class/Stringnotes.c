#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[10] = "first and ";
    char str2[10] = "second";
    char str[4] = "123";
    int num;
    num = atoi(str);

    printf("%d\n", num);

    strcat(str1,str2);
    printf("%s",  &str1);


    return 0;
}