
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
struct Node* insert(struct Node* head, int val) {
    struct Node* newNode = createNode(val);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Count critical points
int solve(struct Node* head) {
    if (head == NULL || head->next == NULL ||
        head->next->next == NULL) {
        return 0;
    }

    int count = 0;

    struct Node* prev = head;
    struct Node* curr = head->next;

    while (curr->next != NULL) {

        if ((curr->data < prev->data &&
             curr->data < curr->next->data) ||

            (curr->data > prev->data &&
             curr->data > curr->next->data)) {

            count++;
        }

        prev = curr;
        curr = curr->next;
    }

    return count;
}

// Main function
int main() {
    struct Node* head = NULL;

    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insert(head, x);
    }

    printf("%d\n", solve(head));

    return 0;
}
