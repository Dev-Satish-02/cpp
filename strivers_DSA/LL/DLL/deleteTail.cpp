#include <bits/stdc++.h>
using namespace std;

// Class representing a node in Doubly Linked List
class Node {
public:
  int data;
  Node *next;
  Node *prev;

  // Constructor when data, next and prev are provided
  Node(int data1, Node *next1, Node *prev1) {
    data = data1;
    next = next1;
    prev = prev1;
  }

  // Constructor when only data is provided
  Node(int data1) {
    data = data1;
    next = nullptr;
    prev = nullptr;
  }
};

// Function to insert at head
Node *deleteTail(Node *head) {
  if (head == nullptr)
    return nullptr;
  if (head->next == nullptr) {
    delete head;
    return nullptr;
  }
  Node *temp = head;
  while (temp->next->next != nullptr)
    temp = temp->next;
  delete temp->next;
  temp->next = nullptr;
  return head;
}

void printList(Node *head) {
  while (head != nullptr) {
    cout << head->data;
    if (head->next != nullptr)
      cout << " <-> ";
    head = head->next;
  }
  cout << endl;
}

int main() {
  // Creating initial list: 0 <-> 1 <-> 2
  Node *head = new Node(0);
  head->next = new Node(1);
  head->next->next = new Node(2);

  cout << "Original list: ";
  printList(head);

  head = deleteTail(head);

  cout << "After Tail Deletion: ";
  printList(head);

  return 0;
}

