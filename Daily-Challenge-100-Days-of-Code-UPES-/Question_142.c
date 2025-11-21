// Q142: Store details of 5 students in an array of structures and print all.
#include<stdio.h>
#include<string.h>

struct Student {
    char name[10];
    int roll_no;
    int marks;
};
int main()
{
    int i;
    struct Student s[5];
    for(i=0;i<5;i++)
    {   printf("Details of %d student",i+1);
        printf("\nEnter the Name of students:");
        getchar();
        fgets(s[i].name,10,stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter the roll_no");
        scanf("%d",&s[i].roll_no);
        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
        printf("\nDetails of %d student",i+1);
        printf("\nName :%s",s[i].name);
        printf("\nRoll_no :%d",s[i].roll_no);
        printf("\nMarks:%d",s[i].marks);
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/