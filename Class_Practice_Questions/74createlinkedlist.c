#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int value, choice;

    while (1) {
        printf("Enter value to insert (-1 to stop): ");
        scanf("%d", &value);

        if (value == -1)
            break;

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }

    printf("Linked List Created.\n");

    return 0;
}
