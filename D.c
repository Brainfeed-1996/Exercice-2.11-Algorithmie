/*
D – Supprimer les maillons contenant des éléments supérieurs à un seuil donné
*/

void deleteNodesAboveThreshold(struct Node** head, int threshold) {
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current != NULL) {
        if (current->data > threshold) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            struct Node* temp = current;
            current = current->next;
            free(temp);
        } else {
            prev = current;
            current = current->next;
        }
    }
}
