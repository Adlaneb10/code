#include <stdio.h>

int function(int);

int main()
{
    int a = 20;
    a = function(a);
    printf("A is %d", a);

    return 0;
}

int function(int a)
{
    a = a + 45;
    return a;
}