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

// 1. Traverse Forward
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 2. Traverse Backward (Reverse Print)
void printListReverse(Node* head) {
    if (head == NULL) return;
    
    Node* temp = head;
    // Go to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Traverse backward
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

// 3. Insert at Head
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// 4. Insert at Tail
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

// 5. Insert at a position (1-based index)
void insertAtPosition(Node* &head, int position, int val) {
    if (position == 1) {
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL || temp->next == NULL) {
        // Position at the tail
        insertAtTail(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* nextNode = temp->next;

    newNode->next = nextNode;
    newNode->prev = temp;
    temp->next = newNode;
    nextNode->prev = newNode;
}

// 6. Delete a node by position (1-based index)
void deleteNode(Node* &head, int position) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;

    // Case 1: Delete Head node
    if (position == 1) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    // Case 2: Delete middle or tail node
    int currentPos = 1;
    while (temp != NULL && currentPos < position) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!\n";
        return;
    }

    // Adjust pointers
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

// Helper to free memory of list
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

    cout << "Inserting elements at tail...\n";
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    printList(head); // Expected: 10 <-> 20 <-> 30 <-> NULL

    cout << "\nInserting 5 at Head:\n";
    insertAtHead(head, 5);
    printList(head); // Expected: 5 <-> 10 <-> 20 <-> 30 <-> NULL

    cout << "\nInserting 15 at position 3:\n";
    insertAtPosition(head, 3, 15);
    printList(head); // Expected: 5 <-> 10 <-> 15 <-> 20 <-> 30 <-> NULL

    cout << "\nPrinting in Reverse (Backward Traversal):\n";
    printListReverse(head); // Expected: 30 <-> 20 <-> 15 <-> 10 <-> 5 <-> NULL

    cout << "\nDeleting node at position 3 (value 15):\n";
    deleteNode(head, 3);
    printList(head); // Expected: 5 <-> 10 <-> 20 <-> 30 <-> NULL

    freeList(head);
    return 0;
}
