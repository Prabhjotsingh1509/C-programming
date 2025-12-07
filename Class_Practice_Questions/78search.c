#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *temp;
    int pos, i;

    // Sample linked list for testing
    head = (struct Node*)malloc(sizeof(struct Node));  
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    printf("Enter position to search: ");
    scanf("%d", &pos);

    temp = head;
    for (i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
        printf("Invalid position!\n");
    else
        printf("Node at position %d = %d\n", pos, temp->data);

    return 0;
}
