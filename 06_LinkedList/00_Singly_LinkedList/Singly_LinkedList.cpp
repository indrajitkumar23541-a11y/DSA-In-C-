#include <iostream>
using namespace std;

// Node Class Definition
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// 1. Insert at the Head (beginning)
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// 2. Insert at the Tail (end)
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

// 3. Insert at a specific position (1-based index)
void insertAtPosition(Node* &head, int position, int val) {
    if (position == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds! Inserting at tail instead.\n";
        insertAtTail(head, val);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// 4. Delete a node by position (1-based index)
void deleteNode(Node* &head, int position) {
    if (head == NULL) {
        cout << "List is empty! Nothing to delete.\n";
        return;
    }

    Node* temp = head;

    // Case 1: Delete Head node
    if (position == 1) {
        head = head->next;
        delete temp; // Free memory
        return;
    }

    // Case 2: Delete middle or tail node
    Node* prev = NULL;
    int currentPos = 1;

    while (temp != NULL && currentPos < position) {
        prev = temp;
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds! Cannot delete.\n";
        return;
    }

    prev->next = temp->next;
    delete temp; // Free memory
}

// 5. Traverse and Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Helper to free memory of entire list
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

    cout << "Inserting elements...\n";
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    printList(head); // Expected: 10 -> 20 -> 30 -> NULL

    cout << "\nInserting 5 at Head:\n";
    insertAtHead(head, 5);
    printList(head); // Expected: 5 -> 10 -> 20 -> 30 -> NULL

    cout << "\nInserting 15 at Position 3:\n";
    insertAtPosition(head, 3, 15);
    printList(head); // Expected: 5 -> 10 -> 15 -> 20 -> 30 -> NULL

    cout << "\nDeleting node at position 4 (value 20):\n";
    deleteNode(head, 4);
    printList(head); // Expected: 5 -> 10 -> 15 -> 30 -> NULL

    // Cleanup
    freeList(head);

    return 0;
}
