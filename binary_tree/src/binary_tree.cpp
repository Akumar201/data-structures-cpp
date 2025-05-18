#include "binary_tree.h"
#include <iostream>

BinaryTree::BinaryTree(): root(nullptr) {}

BinaryTree::Node::Node(int data, Node* left, Node* right) : data(data), left(left), right(right) {} ;

BinaryTree::~BinaryTree()
{
    destroy_tree(root) ;
}

void BinaryTree::insert(int val)
{
    if(root == nullptr)
    {
        root = new Node(val);
        return ; 
    }

    insert(root,val) ;

}

void BinaryTree::insert(Node*& node, int val) {
    if (node == nullptr) {
        node = new Node(val); 
        return;
    }

    if (val < node->data) {
        insert(node->left, val); 
    } else {
        insert(node->right, val);
}
}

void BinaryTree::in_order_traversal() const {
    in_order_traversal(root);  // Call the recursive helper
}

void BinaryTree::in_order_traversal(Node* node) const {
    if (node == nullptr) {
        return;
    }

    in_order_traversal(node->left);         
    std::cout << node->data << " " << std::endl;        
    in_order_traversal(node->right);    
}

void BinaryTree::destroy_tree(Node* node) {
    if (node == nullptr) return;

    destroy_tree(node->left);
    destroy_tree(node->right);
    delete node;
}