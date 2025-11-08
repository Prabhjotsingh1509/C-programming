// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp,*fp1;
    char ch;
    fp=fopen("info.txt","r");
    fp1=fopen("cpy.txt","w");
    while((ch=fgetc(fp)) != EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}
/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/