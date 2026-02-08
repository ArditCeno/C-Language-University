#include <stdio.h>
#include <stdlib.h>

// Struktura e nyjës
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Krijon nje nyje te re
Node* create_node(int value) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if (!new_node) {
        printf("Memoria nuk mund të alokohej.\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

// Fut vlerën në listë në vendin e duhur (renditje rritëse)
void insert_sorted(Node** head, int value) {
    Node* new_node = create_node(value);

    // Nëse lista është bosh ose duhet futur në fillim
    if (*head == NULL || value < (*head)->data) {
        new_node->next = *head;
        *head = new_node;
        return;
    }

    Node* current = *head;
    while (current->next != NULL && current->next->data < value) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

// Printon listen
void print_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Liron memorien
void free_list(Node* head) {
    Node* current;
    while (head != NULL) {
        current = head;
        head = head->next;
        free(current);
    }
}

int main() {
    Node* head = NULL;
    int n, value;

    // Merr numrin e elementeve
    printf("Jep numrin e elementeve: ");
    scanf("%d", &n);

    // Fut elementet ne liste ne menyre te renditur
    printf("Jep %d numra (pa renditje):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert_sorted(&head, value);
    }

    // Merr vleren per te futur
    printf("Jep numrin qe do te futet ne liste: ");
    scanf("%d", &value);
    insert_sorted(&head, value);

    // Printo rezultatin
    printf("Lista e renditur: ");
    print_list(head);

    // Liron memorien
    free_list(head);

    return 0;
}
