// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include<stdio.h>
#include<string.h>

enum user {
    ADMIN,
    USER,
    GUEST
};
int main()
{
    char ch[30];
    enum user permission;

    printf("Enter the role:");
    scanf("%s",ch);

    if(strcmp(ch,"USER") == 0)
    {
        permission=USER;
    }
    else if(strcmp(ch,"ADMIN") == 0)
    {
        permission = ADMIN;
    }
    else 
    {
        permission=GUEST;
    }

    switch(permission)
    {
        case USER:
        printf("Welcome User!");
        break;
        case ADMIN:
        printf("Welcome Admin!");
        break;
        case GUEST:
        printf("Welcome Guest!");
        break;
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/