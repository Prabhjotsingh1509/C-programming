// Q139: Show that enums store integers by printing assigned values.
#include<stdio.h>

enum result{
    SUCCESS,FAILURE,TIMEOUT
};

int main()
{
    enum result ;

    printf("SUCCESS = %d\n",SUCCESS);
    printf("FAILURE = %d\n",FAILURE);
    printf("Timeout = %d\n",TIMEOUT);

    return 0;
}
/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/