#include <stdio.h>

void fxn(int *n1);


int main()
{
    int num=1;
    printf("num cont %d\n", num);
    fxn(num);
    printf("\n num contains %d", num);
    return 0;
}
void fxn(int *n1)
{
    printf("\n n1 cont %d", *n1);
    *(n1)++;
    printf("\n n1 contains %d", *n1);
}