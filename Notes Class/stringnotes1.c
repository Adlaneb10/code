#include <stdio.h>
#include <string.h>
int main()
{
    char password[10] = "secret";
    char input[100];
    int result = 1;
    printf("Enter your password\n");
    gets(input); // or scanf("%s", input);
    
    //string compare will compare these two strings and return a 0 or non 0 (if equal zero password is identical)
    result = strcmp(input,password);
        
                 // or you can do
                //  if(strcmp(input,password) == 0)
                //    {
            //            printf("identical...");
              //    }
              //else
              //{
                //     printf("Incorrect");   
           //   }
        if(result == 0)
        {
            printf("\n identical password\n");

        }
        else
        {
            printf("incorrect password\n");
        }
        
    return 0;
}