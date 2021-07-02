#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *left;
    Node *right;
    Node(int data) {
        this->value = data;
        left = right = NULL;
    }
};
void printPreOrder(Node *node) {
    if(node == NULL) return;
    cout << node->value << " ";
    printPreOrder(node->left);
    printPreOrder(node->right);
}
int main() {
    Node *head = new Node(0);
    head->left = new Node(1);
    head->right = new Node(2);
    head->left->left = new Node(3);
    head->left->right = new Node(4);
    printPreOrder(head);
    return 0;
}