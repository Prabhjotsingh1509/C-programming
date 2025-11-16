// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include<stdio.h>

enum OPERATIONS {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum OPERATIONS status=FAILURE;

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