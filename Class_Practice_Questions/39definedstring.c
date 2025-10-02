// . Write a C program to demonstrate basic string operations such as copying one string to another, concatenating strings with spaces, finding the length of strings, and comparing two strings using string functions like strcpy(), strcat(), strlen(), and strcmp(). Print the results of concatenation, length, and string comparison.
// strcpy(), strcat(), strlen(), and strcmp().

#include<stdio.h>
#include<string.h>

int main()
{
        char str[50]="Programming";
        char str1[50]="with";
        char str2[50]="C";
        char copied[50];//for copy
        char result[50]="";//for concatenation
    
        //for copy of string
        strcpy(copied,str);
        printf("The copy string:%s\n",copied);

        // concatenate
        strcat(result,str);
        strcat(result," ");
        strcat(result,str1);
        strcat(result," ");
        strcat(result,str2);
        //cocatenated string
        printf("The concatenated string=%s\n",result);

        //length
        int l=strlen(str1);
        printf("The length of string=%d\n",l);

        //strings comparision
        if(strcmp(str2,"C") == 0)
        {
            printf("Equal");
        }
        else{
            printf("Not Equal");
        }

        return 0;
}