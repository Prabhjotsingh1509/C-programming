// Wap to define a function that accepts pointers as parameters  pass variable by reference using pointers and modify their value within the function?
#include<stdio.h>

int reference(int *,int *);
int main()
{
    int a=10,b=20;
    reference(&a,&b);
    printf("The Modified numbers: %d %d",a,b);
    return 0;
}
int reference(int *a,int*b)
{
    printf("Enter the modified value:");
    scanf("%d %d",&(*a),&(*b));
    return 0;
}
