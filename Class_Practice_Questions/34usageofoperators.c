#include <stdio.h>

int main() {
    int a = 10, b = 5, result;

    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);

    printf("Logical Operators:\n");
    printf("(a > 5 && b < 10): %d\n", (a > 5 && b < 10));
    printf("(a < 5 || b < 10): %d\n", (a < 5 || b < 10));
    printf("!(a == b): %d\n\n", !(a == b));

    printf("Assignment Operators:\n");
    result = a;
    printf("result = a: %d\n", result);
    result += b;
    printf("result += b: %d\n", result);
    result -= b;
    printf("result -= b: %d\n", result);
    result *= b;
    printf("result *= b: %d\n", result);
    result /= b;
    printf("result /= b: %d\n\n", result);

    printf("Increment / Decrement Operators:\n");
    printf("a = %d\n", a);
    printf("a++ = %d\n", a++); // post-increment
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a); // pre-increment
    printf("a-- = %d\n", a--); // post-decrement
    printf("Now a = %d\n", a);
    printf("--a = %d\n", --a); // pre-decrement

   return 0;
}