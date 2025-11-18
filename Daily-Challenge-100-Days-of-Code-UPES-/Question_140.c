// Q140: Define a struct with enum Gender and print person's gender.
#include<stdio.h>

enum Gender{
    MALE,
    FEMALE,
    OTHER
};
struct person{
    enum Gender gender;
};
int main()
{
    struct person p;
    p.gender =OTHER;

    switch(p.gender)
    {
        case MALE:
        printf("Male");
        break;
        case FEMALE:
        printf("Female");
        break;
        case OTHER:
        printf("Other");
        break;
        default:
        printf("Invalid output!");
    }

    return 0;
}
/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/