// WAP to find if a given number is a palindrome (reverse). Use function palindrome or reverse.
#include <stdio.h>

void pald(int a);
int main()
{
    int num;
    printf("Enter the number =");
    scanf("%d", &num);
    pald(num);
    return 0;
}
void pald(int a)
{
    int temp, r, d = 0;
    temp = a;
    while (a > 0)
    {
        r = a % 10;
        d =d*10+ r;
        a = a / 10;
    }
    if(temp==d)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}