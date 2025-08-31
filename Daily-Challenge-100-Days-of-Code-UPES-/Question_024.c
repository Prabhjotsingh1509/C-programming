// Q24: Write a program to calculate an electricity bill based on units consumed.// 
#include<stdio.h>

int main(){
    float n,b=0;
    printf("Enter the units consumed=");
    scanf("%f",&n);
    if(n<=50)
    {
        b=n*5;
        printf("Bill:%f",b);
    }
    else if(n<=150)
    {
        b=n*6.33;
        printf("Bill %f",b);
    }
    else if(n>=151){
        b=n*8.8;
        printf("Bill %f",b);
    }
    return 0;
}

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/