int getLength(struct Node* head) {
    int count = 0;

    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}
