// Practice Problem: Find Length and Search in Singly Linked List
// Question: Given a Singly Linked List, write functions to:
// 1. Calculate the total number of nodes (length of the list).
// 2. Search for a target element X and return true if found, otherwise false.

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

// 1. Function to find the length of the Linked List
int getLength(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// 2. Function to search for a target element
bool searchKey(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true; // Key found
        }
        temp = temp->next;
    }
    return false; // Key not found
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
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
    insertAtTail(head, 15);
    insertAtTail(head, 22);
    insertAtTail(head, 8);
    insertAtTail(head, 41);
    insertAtTail(head, 30);

    cout << "Linked List: ";
    printList(head);

    // Test getLength
    int length = getLength(head);
    cout << "Length of Linked List: " << length << endl; // Expected: 5

    // Test searchKey
    int key1 = 8;
    int key2 = 100;
    
    cout << "Searching for " << key1 << ": " << (searchKey(head, key1) ? "FOUND" : "NOT FOUND") << endl;  // Expected: FOUND
    cout << "Searching for " << key2 << ": " << (searchKey(head, key2) ? "FOUND" : "NOT FOUND") << endl;  // Expected: NOT FOUND

    freeList(head);
    return 0;
}
