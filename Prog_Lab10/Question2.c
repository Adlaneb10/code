#include <stdio.h>
int main()
{
    int count = 10, *temp, sum = 10;

    temp = &count;
    *temp = 20;
    temp = &sum;
    *temp = count;

    printf("count = %d, *temp = %d, sum is = %d\n", count, *temp, sum);
return 0;
}