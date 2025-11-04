// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100],ch;
    int characters=0,words=0,lines=0;
    int inword=0;
    FILE *fp;
    fp=fopen("info.txt","r");
if(fp == NULL)
    {
        printf("Error in opening file.");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
        {
            inword = 0;
        }
        else if (inword == 0)
        {
            inword = 1;
            words++;
        }
    }
    printf("characters:%d\n",characters);
    printf("word:%d\n",words);
    printf("lines:%d",lines);
    fclose(fp);
    return 0;
}
/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/