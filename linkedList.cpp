#include<bits/stdc++.h>
using namespace std;
struct Node{    
    int value;
    Node *next;
    Node() {
        value = 0;
        next = NULL;
    }
    Node(int data) {
        value = data;
        next = NULL;
    }
    Node(int data, Node *node) {
        value = data;
        next = node;
    }
};
void printList(Node *node) {
    while(node != NULL) {
        cout << node->value << " ";
        node = node->next;
    }
}
void insertNodeFront(Node **head, int data) {
    Node *newNode = new Node(data);
    newNode->next = *head;
}
void insertNodeBack(Node **head, int data) {
    while(head != NULL) {
        head = *head->next;
    }
    Node *newNode = new Node(data);
    newNode->value = data;
    newNode->next = NULL;
    head->next = newNode;
}
int main() {
    Node *head = new Node(0);
    head->next = new Node(2);
    insertNodeFront(&head, 1);
    insertNodeFront(&head, 2);
    insertNodeFront(&head, 3);
    printList(head);
    return 0;
}