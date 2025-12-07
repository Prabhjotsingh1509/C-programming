#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int value, pos, i;

    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &pos);

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (pos == 1) {        // Insert at head
        newNode->next = head;
        head = newNode;
    } else {
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            printf("Invalid position!\n");
            return 0;
        }

        newNode->next = temp->next;  // Insert link
        temp->next = newNode;
    }

    printf("Node inserted at position %d.\n", pos);

    return 0;
}
