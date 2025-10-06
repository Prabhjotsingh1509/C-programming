// Q93: Check if two strings are anagrams of each other.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[30],str1[30];
    int count[256]={0},i=0;
    printf("Enter the 1st string:");
    scanf("%s",str);
    printf("Enter the second string:");
    scanf("%s",str1);

    if(strlen(str1)!=strlen(str))
    {
        printf("not anagrams");
        return 0;
    }
     for (i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
        count[(int)str1[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}
/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/