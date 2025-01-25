#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
};

// Class to manage the linked list
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Create a linked list from an array
    void create(int A[], int n) {
        if (n == 0) return; // If the array is empty, do nothing

        head = new Node; // Allocate memory for the first node
        head->data = A[0];
        head->next = nullptr;

        Node* last = head;

        // Create the rest of the nodes
        for (int i = 1; i < n; i++) {
            Node* t = new Node;
            t->data = A[i];
            t->next = nullptr;

            last->next = t; // Link the new node
            last = t;       // Move last to the new node
        }
    }

    // Display the linked list
    void display() {
        Node* p = head;
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current; // Free the current node
            current = next;
        }
    }
};

// Main function
int main() {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    int n = sizeof(A) / sizeof(A[0]);

    LinkedList list;
    list.create(A, n);

    cout << "Linked List: ";
    list.display();

    return 0;
}
