// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include<stdio.h>
#include<string.h>
struct Student{
    char name[30];
    int roll_no;
    int marks;
}s;
int main()
{
    struct Student s;
    printf("Enter the name of student:");
    fgets(s.name,30,stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("\nEnter the Roll no:");
    scanf("%d",&s.roll_no);
    printf("\nEmter the marks:");
    scanf("%d",&s.marks);
    printf("Name: %s | Roll: %d | Marks: %d",s.name,s.roll_no,s.marks);

    return 0;
}

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/