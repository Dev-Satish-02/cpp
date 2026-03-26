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

Node *convertArr2DLL(vector<int> arr) {
  // Create the head node with the first element of the array
  Node *head = new Node(arr[0]);
  Node *prev = head; // Initialize 'prev' to the head node

  // Traverse the array to create the doubly linked list
  for (int i = 1; i < arr.size(); i++) {
    // Create a new node with data from the array and set its 'back' pointer to
    // the previous node
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp; // Set 'next' of the previous node to the new node
    prev = temp;       // Move 'prev' to the new node
  }
  return head; // Return the head of the doubly linked list
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
  // Initializing an array to create nodes
  vector<int> arr = {2, 5, 8, 7};

  // Convert the array into a doubly linked list
  Node *head = convertArr2DLL(arr);

  cout << "Doubly Linked List: ";
  printList(head);

  return 0;
}
