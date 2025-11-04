// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include<stdio.h>

int main()
{
    int age;
    char name[50];
    FILE *fp;
    fp=fopen("info.txt","w");
    if(fp == NULL)
    {
        printf("Error in opening file.");
        return 1;
    }
    printf("Enter the name:");
    fgets(name,50,stdin);

    printf("enter the age:");
    scanf("%d",&age);

    fprintf(fp,"name:%s\nAge:%d",name,age);
    fclose(fp);

    return 0;
}
/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/