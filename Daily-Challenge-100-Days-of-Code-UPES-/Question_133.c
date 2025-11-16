// Q133: Create an enum for months and print how many days each month has.
#include<stdio.h>

enum Months{
    JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};
int main()
{
    enum Months month=FEB;

    switch(month)
    {
        case JAN:
        printf("31 days");
        break;
        case FEB:
        printf("28 or 29 days");
        break;
        case MAR:
        printf("31 days");
        break;
        case APR:
        printf("30 days");
        break;
        case MAY:
        printf("31 days");
        break;
        case JUN:
        printf("30 days");
        break;
        case JUL:
        printf("31 days");
        break;
        case AUG:
        printf("31 days");
        break;
        case SEP:
        printf("30 days");
        break;
        case OCT:
        printf("31 days");
        break;
        case NOV:
        printf("30 days");
        break;
        case DEC:
        printf("31 days");
        break;
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/