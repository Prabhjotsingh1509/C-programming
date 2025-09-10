// Q41: Write a program to swap the first and last digit of a number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,first,last,middle,new_number,c=0;
    printf("Enter the integer=");
    scanf("%d",&n);
    temp=n;
    last=n%10;
    while(temp>9)
    {
        temp=temp/10;
        c++;
    }
    first=temp;
    c++;
    middle=n%(int)pow(10,c-1);  
    middle=middle/10;
    new_number=last*pow(10,c-1)+middle*10+first;
    printf("New number= %d",new_number);
    return 0;
}
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/