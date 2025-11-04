// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include<stdio.h>

int main()
{
    char str[100];
    FILE *fp;

    fp=fopen("info.txt","r" );

    if(fp==NULL)
    {
        printf("error in opening file");
        return 1;
    }
    while(fgets(str,20,fp)!=NULL)
    {
        puts(str);
    }

    fclose(fp);
    return 0;
}
/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/