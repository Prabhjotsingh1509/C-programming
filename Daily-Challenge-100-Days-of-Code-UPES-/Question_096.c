// Q96: Reverse each word in a sentence without changing the word order.
#include<stdio.h>
#include<string.h>

int rev(char str[]);
int main()
{
    int i=0,j=0;
    char word[50],sentence[100];

    printf("Enter the sentence:");
    fgets(sentence,100,stdin);
    while(sentence[i] !='\0')
    {
        if(sentence[i] != '\n' && sentence[i] !=' ')
        {
            word[j++]=sentence[i];
        }
        else{
            word[j]='\0';
            rev(word);
            j=0;
        }
        i++;
    }
    return 0;
}
int rev(char str[])
{
    int i=0,j=0;
    char str1[50];
    while(str[i] !='\0')
    {
        str1[i]=str[i];
        i++;
    }
    i--;
    while(i>=0)
    {
        str[j]=str1[i];
        i--;
        j++;
    }
    str[j]='\0';
    printf("%s ",str);
    return 0;
}
/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/