#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[60],source[60];
    printf("Enter the file name:");
    scanf("%s",source);

    fp=fopen(source,"a+");
    if(fp == NULL)
    {
        printf("Unable to open");
        exit(0);
    }
    while(fgets(str,sizeof(str),stdin) != NULL)
    {
        fputs(str,fp);
    }
    fclose(fp);
    return 0;
}