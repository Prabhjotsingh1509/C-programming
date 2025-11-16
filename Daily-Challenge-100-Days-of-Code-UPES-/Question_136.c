// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include<stdio.h>
#include<string.h>
enum choices{
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main()
{
    int a,b;
    char ch[30];
    enum choices choose;

    printf("Enter the operation you want to perform:");
    scanf("%s",ch);
    
    printf("Enter two integres:");
    scanf("%d %d",&a,&b);

    if(strcmp(ch,"ADD") == 0)
    {
        choose = ADD;
    }
    else if(strcmp(ch,"SUBTRACT") == 0)
    {
        choose = SUBTRACT;
    }
    else 
    {
        choose = MULTIPLY;
    }

    switch(choose)
    {
        case ADD:
        printf("%d",(a+b));
        break;
        case SUBTRACT:
        printf("%d",(a-b));
        break;
        case MULTIPLY:
        printf("%d",(a*b));
        break;
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/