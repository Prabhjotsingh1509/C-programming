#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 15;
    head->next->next = NULL;

    display(head);

    return 0;
}
