// Write a program to perform selection of a candidate based on age and height using functions. Use a user-defined function selection(), and call that function in the main function. Use conditions say : age <25 and height > 5 feet.
#include<stdio.h>
void selection(int age,float height)
{
    if(age<25 && height>5)
    {
        printf("The candidate is selected");
    }
    else{
        printf("The candidate is not selected");
    }

}
int main()
{
    int age;
    float height;
    printf("Enter the age");
    scanf("%d", &age);
    printf("Enter the height:");
    scanf("%f",&height);
    selection(age,height);
    /*  if(age<25 && height>5)
    {
        printf("The candidate is selected");
    }

    else
    {
        printf("The candidate is not selected");
    } */
    return 0;
}