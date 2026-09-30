#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

node* head = NULL;

// 1. Insert First
void insertFirst(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        newnode -> next = head;
        head = newnode;
    }
}

// 2. Delete First
void deleteFirst() {
    if (head == NULL) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    delete temp;
}

// Display Stack
void display() {
    if (head == NULL) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    node *temp = head;
    cout << "Isi Stack: ";

    while (temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    system("cls");
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    display();
    deleteFirst();
    display();

    return 0;
}