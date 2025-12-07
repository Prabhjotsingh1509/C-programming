#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int value;

    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode; // If empty, new node becomes head
    } else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;  // Traverse to last node

        temp->next = newNode;  // Insert at end
    }

    printf("Node inserted at end.\n");

    return 0;
}
