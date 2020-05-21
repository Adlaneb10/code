/* copying a string*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char name1[6] = "Sharon";
    char name2[5] = "Mark";

    //Copy name 1 into name 2

    //strcpy(destination.string, source.string);
    strcpy(name2, name1);
    printf("%s", name2);

    return 0;
}