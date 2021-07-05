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
void printList(Node *head) {
    while(head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}
void insertNodeFront(Node **head, int data) {
    Node *newNode = new Node(data);
    newNode->next = *head;
    *head = newNode;
}
void insertNodeBack(Node *head, int data) {
    while(head->next != NULL) {
        head = head->next;
    }
    Node *newNode = new Node(data);
    head->next = newNode;
}
// generalize
void insertAtKIndex(Node *head, int data, int k) {
    while(head->next != NULL && k) {
        head = head->next;
        k--;
    }
    Node *newNode = new Node(data);
    newNode->next = head->next;
    head->next = newNode;
}
void deleteNodeAtKIndex(Node *head, int k) {
    k -= 2;
    while(head->next != NULL && k) {
        head = head->next;
        k--;
    }
    // now head is the node that is previous to the delete node
    Node *tmp = head->next;
    delete(tmp);
    head->next = head->next->next;
}
int main() {
    Node *head = new Node(0);
    head->next = new Node(2);
    insertNodeFront(&head, 1);
    insertNodeFront(&head, 2);
    insertNodeFront(&head, 3);
    insertNodeBack(head, 4);
    insertNodeBack(head, 5);
    insertAtKIndex(head, 10, 2);
    printList(head);
    return 0;
}