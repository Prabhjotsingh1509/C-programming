// Q64: Find the digit that occurs the most times in an integer number.
#include<stdio.h>

int main()
{
    long long num;
    int freq[10]={0};
    int digit,i,maxdigit=0,maxfreq=0;

    printf("Enter the number=");
    scanf("%lld",&num);
    if(num<0)
    num=-num;

    while (num>0)
    {
        digit=num%10;
        freq[digit]++;
        num/=10;
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            maxdigit=i;
        }
    }

    printf("Digit %d occurs %d times",maxdigit,maxfreq);
    return 0;
}
/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/