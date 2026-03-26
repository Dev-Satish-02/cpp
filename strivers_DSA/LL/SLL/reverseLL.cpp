#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse the link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }

    return prev; // new head
}

// Function to print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{4, NULL};

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
