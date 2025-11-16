// Q135: Assign explicit values starting from 10 and print them.
#include<stdio.h>
enum Values {
    A = 10,
    B,
    C
};
int main()
{
    enum Values value;

    printf("A= %d\n",A);
    printf("B= %d\n",B);
    printf("C= %d\n",C);

    return 0;
}
/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12
*/