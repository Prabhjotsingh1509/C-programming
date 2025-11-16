// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include<stdio.h>
#include<string.h>

enum OPERATIONS {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char st[30];
    enum OPERATIONS status;

    printf("Enter the operation status:");
    scanf("%s",st);
    if(strcmp(st,"FAILURE") == 0)
    {
        status = FAILURE;
    }
    else if(strcmp(st,"SUCCESS") == 0)
    {
        status = SUCCESS;
    }
    else 
    {
        status = TIMEOUT;
    }
    switch(status)
    {
        case FAILURE:
        printf("Operation failed");
        break;
        case SUCCESS:
        printf("Operation succeeded");
        break;
        case TIMEOUT:
        printf("Operation time out");
        break;
    }
}
/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/