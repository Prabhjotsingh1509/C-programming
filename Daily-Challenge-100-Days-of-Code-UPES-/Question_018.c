// Q18: Write a program to assign grades based on a percentage input.// 
#include<stdio.h>
 int main()
 {
    float n;
    printf("Enter the percentage=");
    scanf("%f",&n);
    if(n>=90.01)
        printf("Grade A");
    else if(n>=80.01 && n<=90.0)
    printf("Grade B");
    else if(n>=70.01 && n<=80.0)
    printf("Grade C");
    else if(n>=60.01 && n<=70.0)
    printf("Grade D");
    else if(n>=50.01 && n<=60.0)
    printf("Grade E");
    else
    printf("Grade F");


 }

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/