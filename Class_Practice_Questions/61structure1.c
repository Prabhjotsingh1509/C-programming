// WAP to access the structure members using structure pointer and dot operator?
#include<stdio.h>
#include<string.h>
struct Student {
    char name[20];
    int roll;
    float marks;
};
int main() {
    struct Student s = {"Rahul", 101, 88.5};  
    struct Student *ptr;                      

    ptr = &s;  

    printf("Dot Operator:\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    printf("\nStructure Pointer:\n");
    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
