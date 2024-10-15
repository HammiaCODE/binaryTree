#include <iostream>

#ifndef BINARYTREE_H
#define BINARYTREE_H


struct Node {
    int data;
    Node* left;
    Node* right;


    Node(int value);
};


class BinaryTree {
public:
    Node* root;


    //Constructor
    BinaryTree();
    Node* insert(Node* node, int value);


    void preorder(Node* node, int value);


};

#endif //BINARYTREE_H
