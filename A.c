/*
A – Supprimer un maillon sur deux, en commençant par la tête de liste
*/

void deleteEveryOtherNode(struct Node* head) {
    struct Node* current = head;
    struct Node* nextNode;

    while (current != NULL && current->next != NULL) {
        nextNode = current->next;
        current->next = nextNode->next;
        free(nextNode);
        current = current->next;
    }
}
