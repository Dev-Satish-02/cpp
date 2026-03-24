#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

Node *deleteHead(Node *head) {

  // replace head with node for deleting any random node
  head->data = head->next->data;
  head->next = head->next->next;
  return head;
}

void printList(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data;
    if (temp->next != nullptr)
      cout << " -> ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *head = new Node(0);
  head->next = new Node(1);
  head->next->next = new Node(2);

  cout << "Original list: ";
  printList(head);

  head = deleteHead(head);

  cout << "After Head Deletion ";
  printList(head);
}
