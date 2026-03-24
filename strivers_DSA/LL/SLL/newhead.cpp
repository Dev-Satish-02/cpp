#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data1) {
    data = data1;
    next = nullptr;
  }
};

// Function to insert at head
Node* insertAtHead(Node *head, int val) {
  // Step 1: create new node
  Node* newNode = new Node(val);

  // Step 2: point new node to current head
  newNode->next = head;

  // Step 3: update head
  head = newNode;

  return head;
}

// Function to print linked list
void printList(Node* head) {
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp->data;
    if (temp->next != nullptr)
      cout << " -> ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  // Creating initial list: 0 -> 1 -> 2
  Node* head = new Node(0);
  head->next = new Node(1);
  head->next->next = new Node(2);

  cout << "Original list: ";
  printList(head);

  // Insert 5 at head
  head = insertAtHead(head, 5);

  cout << "After insertion: ";
  printList(head);

  return 0;
}
