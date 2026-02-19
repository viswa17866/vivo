#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
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
void deleteNode(int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        cout << "Value not found\n";
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main() {
    insertAtBeginning(10);
    insertAtBeginning(5);
    insertAtEnd(20);
    insertAtEnd(30);
    cout << "Linked List: ";
    display();
    deleteNode(20);
    cout << "After Deletion: ";
    display();
    return 0;
}
