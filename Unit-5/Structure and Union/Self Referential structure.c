#include <stdio.h>
#include <stdlib.h>

// Define a self-referential structure
struct Node {
    int data;            // Integer data to hold a value
    struct Node* next;   // Pointer to the next node (self-referential)
};

int main() {
    // Create two nodes dynamically using malloc
    struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));

    // Assign values to the first node
    node1->data = 10;
    node1->next = node2;  // Point to the second node

    // Assign values to the second node
    node2->data = 20;
    node2->next = NULL;    // End of list (NULL)

    // Print the values of the linked list nodes
    printf("Node 1 data: %d\n", node1->data);
    printf("Node 2 data: %d\n", node2->data);

    // Free the dynamically allocated memory
    free(node1);
    free(node2);

    return 0;
}
