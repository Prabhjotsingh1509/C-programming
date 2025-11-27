// Q148: Take two structs as input and check if they are identical.
#include<stdio.h>
#include<string.h>
struct Student {
    char name[30];
    int rollNo;
    int marks;
};
int  main()
{   int i;
    struct Student s[2];

    for(i=0;i<2;i++)
    {
        printf("Student %d\n",i+1);
        fflush(stdin);
        printf("Enter Name:");
        fgets(s[i].name,30,stdin);
        s[i].name[strcspn(s[i].name,"\n")] = '\0';
        printf("Enter roll number:");
        scanf("%d",&s[i].rollNo);
        printf("Enter the marks:");
        scanf("%d",&s[i].marks);
    }
    if(strcmp(s[0].name,s[1].name)==0 && s[0].rollNo == s[1].rollNo && s[0].marks == s[1].marks)
    {
        printf("Same");
    }
    else 
    {
        printf("Not Same");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/