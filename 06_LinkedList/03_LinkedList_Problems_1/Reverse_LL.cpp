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

// 1. Iterative Reversal
Node* reverseIterative(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr != NULL) {
        forward = curr->next; // Save next node
        curr->next = prev;     // Reverse pointer link
        prev = curr;          // Move prev forward
        curr = forward;       // Move curr forward
    }
    return prev; // prev will be the new head
}

// 2. Recursive Reversal
Node* reverseRecursive(Node* head) {
    // Base Case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive Call
    Node* chhotaHead = reverseRecursive(head->next);

    // Swap connections
    head->next->next = head;
    head->next = NULL;

    return chhotaHead;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

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

void freeList(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    head = NULL;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    cout << "Original List:\n";
    printList(head); // Expected: 10 -> 20 -> 30 -> 40 -> NULL

    cout << "\nReversing Iteratively:\n";
    head = reverseIterative(head);
    printList(head); // Expected: 40 -> 30 -> 20 -> 10 -> NULL

    cout << "\nReversing Recursively (Back to Original):\n";
    head = reverseRecursive(head);
    printList(head); // Expected: 10 -> 20 -> 30 -> 40 -> NULL

    freeList(head);
    return 0;
}
