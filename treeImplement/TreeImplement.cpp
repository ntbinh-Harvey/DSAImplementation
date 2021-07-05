#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *left;
    Node *right;
    Node(int data) {
        value = data;
        left = right = NULL;
    }
};
void insertNodeLeft(Node *node, int data) {
    Node *newNode = new Node(data);
    node->left = newNode;
}
void insertNodeRight(Node *node, int data) {
    Node *newNode = new Node(data);
    node->right = newNode;
}
void printTreeInorder(Node *root) {
    if(root == NULL) return;
    printTreeInorder(root->left);
    cout << root->value << " ";
    printTreeInorder(root->right);
}
int main() {
    Node *root = new Node(5);
    insertNodeLeft(root, 3);
    insertNodeRight(root, 4);
    insertNodeLeft(root->left, 2);
    insertNodeRight(root->left, 1);
    printTreeInorder(root);
    return 0;
}