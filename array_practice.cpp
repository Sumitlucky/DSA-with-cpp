#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to traverse the linked list
void traverse(Node* head) {
    Node* ptr = head;  // Start from the head node
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;  // Move to the next node
    }
    cout << endl;
}

// Helper function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Example usage
int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40 -> NULL
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    cout << "Linked List: ";
    traverse(head);

    return 0;
}
