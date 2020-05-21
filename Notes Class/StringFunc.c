/*finding the length of a string */

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[] = "Sharon"; //Leaving [] empty OS will not include null character e.g non null terminanting string --> 6 characters ( set array to 7 or greater)
    char name2[10] = "Mark";
    char *name3 = "Patrick";
    int len;
    len = strlen(name1);
    //function to find length of a string is strlen() excludes \0 (null ) charachter
    //returns number of characters in a string excluding null character
    printf("%d %d %d %d %d", strlen(name1), strlen(name2), strlen(name3), strlen(name1), strlen(name1));
    
    strlen(name1);
    printf("\n%d", len);



    return 0;
}