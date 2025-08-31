//wap to print name, roll no and address//
#include<stdio.h>

int main()
{
    char name[20];
    int roll_no;
    char address[20];
    printf("Enter the student name");
    scanf("%s",&name);
    fflush(stdin);
    printf("Enter the student roll no=");
    scanf("%d",&roll_no);
    fflush(stdin);
    printf("Enter the address");
    gets(address);
    printf("student name=%s\n",name);
    printf("roll no =%d\n",roll_no);
    printf("address= %s\n",address);
    return 0;
}