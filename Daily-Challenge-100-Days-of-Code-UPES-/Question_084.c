// Q84: Convert a lowercase string to uppercase without using built-in functions.
#include<stdio.h>

int main()
{
   int i=0;
   char str[10];
   printf("Enter the string");
   scanf("%s",str);
   
   while(str[i] !='\0')
   {
        if(str[i]>=97 && str[i]<=122)
        {
            printf("%c",str[i]-32);
        }
        else{
            printf("%c",str[i]);
        }
        i++;
   }
   return 0;
}
/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/