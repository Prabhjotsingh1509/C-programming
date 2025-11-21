#include<stdio.h>

int main()
{
    char str[50];
    int age;
    FILE *fp;
    fp=fopen("stud.txt","w");
    if(fp == NULL )
    {
        printf("Error in opening the file.");
        exit(0);
    }

    printf("Enter the name:");
    fgets(str,50,stdin);
    printf("Enter the age:");
    scanf("%d",&age);

    fprintf(fp,"name:%s\n,age:%d",str,age);
    fclose(fp);
    return 0;

}