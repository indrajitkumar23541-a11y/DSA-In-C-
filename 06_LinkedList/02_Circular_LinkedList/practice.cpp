// Practice Problem: Check if a Linked List is Circular
// Question: Write a function to check whether a given Singly Linked List is Circular or not.
//
// Logic: Start traversing from head->next. 
// If we reach NULL at any point, the list is not circular (returns false).
// If we reach the head node again, the list is circular (returns true).

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to check if list is circular
bool isCircularList(Node* head) {
    if (head == NULL) {
        return true; // An empty list is circular by definition
    }

    Node* temp = head->next;

    // Traverse list
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }

    // If we looped back to head
    return (temp == head);
}

// Helpers to create lists
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void makeCircular(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head; // Make last node point to head
}

void freeCircular(Node* &head) {
    if (head == NULL) return;
    Node* current = head->next;
    
    // Break circularity
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = NULL;

    while (current != NULL) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = NULL;
}

void freeSingly(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
}

int main() {
    // 1. Create a normal Singly Linked List
    Node* head1 = NULL;
    insertAtTail(head1, 10);
    insertAtTail(head1, 20);
    insertAtTail(head1, 30);

    cout << "Checking first list (Singly): ";
    cout << (isCircularList(head1) ? "CIRCULAR" : "NOT CIRCULAR") << endl; // Expected: NOT CIRCULAR

    // 2. Create a Circular Linked List
    Node* head2 = NULL;
    insertAtTail(head2, 10);
    insertAtTail(head2, 20);
    insertAtTail(head2, 30);
    makeCircular(head2); // Make it circular

    cout << "Checking second list (Circular): ";
    cout << (isCircularList(head2) ? "CIRCULAR" : "NOT CIRCULAR") << endl; // Expected: CIRCULAR

    // Cleanup
    freeSingly(head1);
    freeCircular(head2);

    return 0;
}
