// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp2;
    char ch,str[50];

    fp=fopen("input.txt","r");
    if(fp == NULL)
    {
        printf("Unable to open input.txt\n");
        exit(0);
    }
    fp2 = fopen("output.txt", "w");
    if(fp2 == NULL)
    {
        printf("Unable to open output.txt\n");
        fclose(fp);
        exit(0);
    }
    while((ch=fgetc(fp)) != EOF)
    {
        if(ch>=97 && ch<=122)
        {
            fputc(ch-32,fp2);
        }
        else{
            fputc(ch,fp2);
        }
    }
    fclose(fp);
}
/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/