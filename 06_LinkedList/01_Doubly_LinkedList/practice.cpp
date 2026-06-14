// Practice Problem: Reverse a Doubly Linked List
// Question: Reverse a Doubly Linked List in-place.
//
// Logic: Traverse through the list and for each node, swap its 'next' and 'prev' pointers.
// Finally, update the 'head' pointer to point to the last node (which is the new head).

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Function to reverse a Doubly Linked List
void reverseDLL(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return; // Already reversed or empty
    }

    Node* current = head;
    Node* temp = NULL;

    // Swap next and prev pointers for all nodes
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        
        // Move to the next node in original DLL (which is current->prev after swapping!)
        current = current->prev;
    }

    // Set head to the last node we processed
    if (temp != NULL) {
        head = temp->prev;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
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
    newNode->prev = temp;
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
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    cout << "Original Doubly Linked List:\n";
    printList(head); // Expected: 1 <-> 2 <-> 3 <-> 4 <-> NULL

    reverseDLL(head);

    cout << "\nReversed Doubly Linked List:\n";
    printList(head); // Expected: 4 <-> 3 <-> 2 <-> 1 <-> NULL

    freeList(head);
    return 0;
}
