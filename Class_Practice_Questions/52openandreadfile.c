#include<stdio.h>

int main()
{
    char str[30];
    FILE *fp;
    fp=fopen("info.txt","r");
    if(fp == NULL)
    {
        printf("Error in opening");
    }
    while(fgets(str,20,fp) != NULL)
    {
        puts(str);
    }
    fclose(fp);
    return 0;
}

