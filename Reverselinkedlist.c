#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void reverse(struct Node** head) {
    struct Node *prev = NULL, *current = *head, *next = NULL;
    
    while (current != NULL) {
      
        next = current->next;
        
        current->next = prev;
        

        prev = current;
        current = next;
    }
    
    *head = prev;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void append(struct Node** head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = new_data;
    new_node->next = NULL;


    if (*head == NULL) {
        *head = new_node;
        return;
    }

    
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

int main() {
    struct Node* head = NULL;


    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("Original List: ");
    printList(head);

    reverse(&head);

    printf("Reversed List: ");
    printList(head);

    return 0;
}
