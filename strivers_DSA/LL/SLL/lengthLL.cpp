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

int LengthLL(Node *head) {
  int cnt = 0;
  Node *temp = head;
  while (temp != nullptr) {
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

int main() {
  Node *head = new Node(0);
  head->next = new Node(1);
  head->next->next = new Node(2);

  int length = LengthLL(head);

  cout << "Length of LL: " << length << endl;
}
