#include <stdio.h>
int main()
{
    int num, total;
    num = total = 0;

    while(num >=0)
    {
        printf("Enter any pos number");
        scanf("%d", &num);

        total = num + total;
    }// End while

    printf("Total of numberss entered is %d", total);

    return 0;
}