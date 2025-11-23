// WAP to pass a structure as an argument into functions using Call by value and Call by reference.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

void displayByValue(struct Student s);      
void displayByReference(struct Student *s);

void displayByValue(struct Student s) {
    printf("\n--- Display Using Call by Value ---\n");
    printf("Name  : %s\n", s.name);
    printf("Roll  : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}

void displayByReference(struct Student *s) {
    printf("\n--- Display Using Call by Reference ---\n");
    printf("Name  : %s\n", s->name);
    printf("Roll  : %d\n", s->roll);
    printf("Marks : %.2f\n", s->marks);
}

int main() {
    struct Student stu;

    strcpy(stu.name, "Aman");
    stu.roll = 101;
    stu.marks = 88.5;

    displayByValue(stu);
    displayByReference(&stu);

    return 0;
}
