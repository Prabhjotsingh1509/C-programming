#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int length(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    struct Node *head = NULL;

    // Sample list
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 10;
    head->next->next = NULL;

    printf("Length of linked list = %d\n", length(head));

    return 0;
}
