// Q94: Find the longest word in a sentence.
#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j,count=0,maxlength=0;
    char sentence[100],word[50],longest[100];
    int arr[100];
    printf("Enter the sentence");
    fgets(sentence,100,stdin);
    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]!=' ' && sentence[i]!='\n')
        {
            word[j++]=sentence[i];
        }
        else{
            word[j]='\0';
            if(j>maxlength)
            {
                maxlength=j;
                strcpy(longest,word);
            }
            j=0;
        }
    }
    printf("The longest word:%s\n",longest);
    return 0;
}
/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/