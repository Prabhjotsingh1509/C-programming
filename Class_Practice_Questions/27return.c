#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age!\n");
        return 0; // exits the program early
    }

    printf("You entered: %d\n", age);
    printf("Program continues normally...\n");

    return 0;
}
