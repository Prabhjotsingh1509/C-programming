#include<stdio.h>
#include<string.h>

int main()
{
    char oldfilename[51];
    char newfilename[51];

    printf("Enter old name:");
    scanf("%s",oldfilename);
    printf("Enter new name:");
    scanf("%s",newfilename);
    int result = rename(oldfilename,newfilename);

    if(result == 0)
    {
        printf("name changed");
    }
    else 
    {
        printf("name do not change");
    }
    return 0;
}