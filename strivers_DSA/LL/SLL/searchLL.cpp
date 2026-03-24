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

int searchLL(Node *head, int findIt) {
  int search = 0;
  Node *temp = head;
  while (temp != nullptr) {
    search++;
    if (temp->data == findIt)
      break;
    temp = temp->next;
  }
  return search;
}

int main() {
  Node *head = new Node(0);
  head->next = new Node(1);
  head->next->next = new Node(2);
  int findIt;

  cout << "Find what? ";
  cin >> findIt;

  int foundIt = searchLL(head, findIt);
  cout << "Position of " << findIt << " in LL: " << foundIt << endl;
}
