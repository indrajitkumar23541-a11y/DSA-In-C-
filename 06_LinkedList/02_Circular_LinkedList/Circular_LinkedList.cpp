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

// 1. Insert Node (inserts after 'element')
void insertNode(Node* &tail, int element, int val) {
    // Empty list
    if (tail == NULL) {
        Node* newNode = new Node(val);
        tail = newNode;
        newNode->next = newNode; // Points to itself (circular)
        return;
    }

    // Non-empty list: assume 'element' exists
    Node* current = tail;
    while (current->data != element) {
        current = current->next;
        // If we loop back to tail, the element was not found
        if (current == tail) {
            cout << "Element " << element << " not found in the circular list!\n";
            return;
        }
    }

    // Element found: insert new node after 'current'
    Node* temp = new Node(val);
    temp->next = current->next;
    current->next = temp;

    // Update tail if we inserted after tail node
    if (current == tail) {
        tail = temp;
    }
}

// 2. Delete Node with value 'val'
void deleteNode(Node* &tail, int val) {
    if (tail == NULL) {
        cout << "List is empty! Cannot delete.\n";
        return;
    }

    Node* prev = tail;
    Node* current = prev->next;

    // Case 1: Only 1 node in list
    if (current == prev) {
        if (current->data == val) {
            tail = NULL;
            delete current;
        }
        return;
    }

    // Case 2: Multi-node list
    while (current->data != val) {
        prev = current;
        current = current->next;
        if (current == tail->next) { // Back to start, element not found
            cout << "Element " << val << " not found in list.\n";
            return;
        }
    }

    prev->next = current->next;

    // Update tail if we deleted the tail node
    if (current == tail) {
        tail = prev;
    }
    
    delete current;
}

// 3. Print the Circular Linked List
void printList(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = tail->next; // Start from head (tail->next)
    
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail->next);
    
    cout << "(back to head)" << endl;
}

void freeList(Node* &tail) {
    if (tail == NULL) return;
    Node* current = tail->next;
    tail->next = NULL; // Break the circle to prevent infinite loop during delete

    while (current != NULL) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    tail = NULL;
}

int main() {
    Node* tail = NULL;

    cout << "Inserting elements into Circular Linked List...\n";
    insertNode(tail, -1, 10); // inserts into empty list
    printList(tail);          // Expected: 10 -> (back to head)

    insertNode(tail, 10, 20); // insert 20 after 10
    printList(tail);          // Expected: 10 -> 20 -> (back to head)

    insertNode(tail, 20, 30); // insert 30 after 20
    insertNode(tail, 10, 15); // insert 15 after 10
    printList(tail);          // Expected: 10 -> 15 -> 20 -> 30 -> (back to head)

    cout << "\nDeleting node with value 20:\n";
    deleteNode(tail, 20);
    printList(tail);          // Expected: 10 -> 15 -> 30 -> (back to head)

    freeList(tail);
    return 0;
}
