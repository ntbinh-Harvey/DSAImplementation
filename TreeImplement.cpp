#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *left;
    Node *right;
};
Node *createNode(int value) {
    Node *node = new Node();
    node->left = NULL;
    node->right = NULL;
    node->value = value;
    return node;
}
void insertNodeLeft(Node *rootNode, Node *leftNode) {
    rootNode->left = leftNode;
}
void printTree(Node *node) {

}
int main() {
    Node *node = createNode(5);
    return 0;
}