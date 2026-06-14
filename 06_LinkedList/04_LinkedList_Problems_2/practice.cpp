// Practice Problem: Remove Duplicates from a Sorted Linked List
// Question: Given a sorted Singly Linked List, delete all duplicate nodes 
// such that each element appears only once.
//
// Logic: Traverse the list. For each node, if curr->data == curr->next->data:
// - Keep a pointer to the duplicate node: Node* temp = curr->next
// - Bypass the duplicate node: curr->next = curr->next->next
// - Delete temp to free memory
// If they are not equal, just move forward: curr = curr->next

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

// Function to remove duplicates from sorted list
Node* removeDuplicates(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    while (curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node* duplicateNode = curr->next;
            curr->next = curr->next->next;
            delete duplicateNode; // Free memory
        } else {
            curr = curr->next; // Move forward
        }
    }
    return head;
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
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    cout << "Original Sorted List: ";
    printList(head); // Expected: 1 -> 1 -> 2 -> 3 -> 3 -> 3 -> 4 -> NULL

    head = removeDuplicates(head);

    cout << "List after Duplicate Removal: ";
    printList(head); // Expected: 1 -> 2 -> 3 -> 4 -> NULL

    freeList(head);
    return 0;
}
