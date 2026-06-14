// Practice Problem: Find Middle Node of a Linked List
// Question: Given a Singly Linked List, find its middle node in a single pass.
// If the list has even length, return the second middle node (LeetCode standard).
//
// Logic: Use two pointers 'slow' and 'fast'. 
// Move 'slow' by 1 step and 'fast' by 2 steps.
// When 'fast' reaches end (fast == NULL or fast->next == NULL),
// the 'slow' pointer points to the middle node.

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

// Function to find the middle node of the list
Node* findMiddle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; // 0 or 1 node
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;       // Move 1 step
        fast = fast->next->next; // Move 2 steps
    }

    return slow; // Points to the middle
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
    // Test Case 1: Odd Length Linked List
    Node* headOdd = NULL;
    insertAtTail(headOdd, 1);
    insertAtTail(headOdd, 2);
    insertAtTail(headOdd, 3);
    insertAtTail(headOdd, 4);
    insertAtTail(headOdd, 5);

    cout << "Odd length list:  ";
    printList(headOdd);
    
    Node* midOdd = findMiddle(headOdd);
    cout << "Middle Node data: " << (midOdd ? midOdd->data : -1) << endl; // Expected: 3

    // Test Case 2: Even Length Linked List
    Node* headEven = NULL;
    insertAtTail(headEven, 1);
    insertAtTail(headEven, 2);
    insertAtTail(headEven, 3);
    insertAtTail(headEven, 4);
    insertAtTail(headEven, 5);
    insertAtTail(headEven, 6);

    cout << "\nEven length list: ";
    printList(headEven);
    
    Node* midEven = findMiddle(headEven);
    cout << "Middle Node data: " << (midEven ? midEven->data : -1) << endl; // Expected: 4 (second middle node)

    // Cleanup
    freeList(headOdd);
    freeList(headEven);
    return 0;
}
