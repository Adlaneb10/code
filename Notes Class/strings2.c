#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[21];
    printf("Enter a name\n");
    gets(name); //scanf("%s", &name); 
    // Or you can use fgets(name,sizeof(name), stdin);
    printf("Hello  ");
    puts( name); //printf("%s", name);
    return 0;
}