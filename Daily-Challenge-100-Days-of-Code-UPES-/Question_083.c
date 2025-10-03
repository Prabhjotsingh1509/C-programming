// Q83: Count vowels and consonants in a string.
#include<stdio.h>

int main()
{
    int i=0,v=0,c=0;
    char str[10];
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("Vowels=%d, Consonant=%d",v,c);
    return 0;
}
/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/