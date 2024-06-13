// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchiId;
    Node* rightchiId;

    //Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchiId = l;
        rightchiId = r;
    }
};

class BinaryTree {
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initalizing ROOT to null
    }

    void insert(string element) //Insert a node in in the binary search tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); //Allocate memory for the new node
    newNode->info = element; //Assign value to the data field of the new node
    newNode->leftchiId = nullptr;//Make the left child of the new node point to NULL.
    newNode->rightchiId = nullptr; //Make the right child of the new node point to NULL.

    Node* parent = nullptr;
    Node* currentNode = nullptr;
    search(element, parent, currentNode); //Locate the node wich will be the parent of the node to be insert

    
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
