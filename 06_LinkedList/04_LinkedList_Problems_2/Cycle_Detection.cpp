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

// 1. Detect cycle in list and return the meeting node (or NULL)
Node* detectCycle(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            return slow; // Loop detected
        }
    }
    return NULL; // No loop
}

// 2. Get the starting node of the loop
Node* getStartingNode(Node* head) {
    Node* intersection = detectCycle(head);
    if (intersection == NULL) {
        return NULL; // No cycle
    }

    Node* slow = head;
    Node* fast = intersection;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow; // Points to starting node of cycle
}

// 3. Remove the loop/cycle from list
void removeCycle(Node* head) {
    Node* startNode = getStartingNode(head);
    if (startNode == NULL) {
        return; // No cycle to remove
    }

    Node* temp = startNode;
    while (temp->next != startNode) {
        temp = temp->next;
    }
    temp->next = NULL; // Break the cycle
}

void printList(Node* head) {
    Node* temp = head;
    int limit = 10; // Prevent infinite print if cycle exists
    while (temp != NULL && limit > 0) {
        cout << temp->data << " -> ";
        temp = temp->next;
        limit--;
    }
    if (limit == 0) cout << "... (infinite loop detected!)" << endl;
    else cout << "NULL" << endl;
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
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    // Create a cycle for testing: 5 -> 3
    Node* temp = head;
    Node* node3 = NULL;
    while (temp->next != NULL) {
        if (temp->data == 3) {
            node3 = temp;
        }
        temp = temp->next;
    }
    temp->next = node3; // 5's next points to 3

    cout << "List with Cycle: ";
    printList(head); // Expected: 1 -> 2 -> 3 -> 4 -> 5 -> 3 -> ...

    Node* start = getStartingNode(head);
    if (start != NULL) {
        cout << "Cycle detected! Starts at node with value: " << start->data << endl; // Expected: 3
    } else {
        cout << "No cycle detected." << endl;
    }

    cout << "\nRemoving cycle...\n";
    removeCycle(head);

    cout << "List after removing cycle: ";
    printList(head); // Expected: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    freeList(head);
    return 0;
}
