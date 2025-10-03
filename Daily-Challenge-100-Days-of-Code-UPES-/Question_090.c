// Q90: Toggle case of each character in a string.
#include<stdio.h>

int main()
{
   int i=0;
   char str[10];
   printf("Enter the string");
   scanf("%s",str);
   printf("The Toggle case:");
   while(str[i] !='\0')
   {
        if(str[i]>=97 && str[i]<=122)
        {
            printf("%c",str[i]-32);
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            printf("%c",str[i]+32);
        }
        i++;
   }
   return 0;
}
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/