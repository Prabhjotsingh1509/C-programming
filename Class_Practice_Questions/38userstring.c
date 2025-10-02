// WAP to manipulate strings using arrays :
// Using standard library functions of string
// Define user-defined functions for copy, length, concatenation and string comparison.                                                                       OR                                                                                                                                                                                                               Write a C program to implement your own versions of string handling functions—copying a string, finding the length of a string, concatenating two strings, and comparing two strings—without using the standard library functions. Define and use user-defined functions copy(), length(), concatenate(), and String_Comparison() to perform these operations on strings , and demonstrate these functions in the main() function.
#include<stdio.h>

int copy(char s[],char d[]);
int length(char s[]);
int concatenate(char s[],char c[]);
int string_comparision(char s[]);

int main()
{
    char str[100],copied[100],result[100]="";
    printf("Enter the string:");
    gets(str);

    //length
    int l=length(str);
    printf("Length of String:%d\n",l);
    //copy
    copy (str,copied);
    printf("Enter the copied string: %s\n",copied);
    //concatenate
    concatenate(str,result);
    printf("the concatenate:%s\n",result);
    //comparision
    int comp=string_comparision(str);
    if(comp== -1)
    {
        printf("Not equal");
    }
    else
    printf("Equal");
    return 0;
}
//length of string
int length(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
// copy of string
int copy(char source[100],char destination[100])
{
    int i=0;
    while(source[i] != '\0')
    {
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
    return 0;
}
// concatenate of a strings
int concatenate(char str1[],char result[])
{
    int i=0,j=0;
    char str2[100];
    printf("Enter the string you want to concatenate:");
    gets(str2);
    printf("\n");
    while(str1[i] !='\0')
    {
        result[i]=str1[i];
        i++;
    }
    while(str2[j] != '\0')
    {
       result[i]=str2[j];
       j++;
       i++; 
    }
    return 0;
}
// comparision of strings.
int string_comparision(char str[])
{
    char str1[100];
    int i=0;
    printf("Enter the string for comparision:");
    gets(str1);
    printf("\n");
    while(str[i] != '\0')
    {
        if(str[i] != str[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}