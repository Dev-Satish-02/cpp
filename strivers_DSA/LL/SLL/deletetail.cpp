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

  head = deleteTail(head);

  cout << "After Tail Deletion ";
  printList(head);
}
