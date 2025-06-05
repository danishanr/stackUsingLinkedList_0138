#include <iostream>
using namespace std;

// Node class representing a single node in the single linked list

class Node
{
public :
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// Stack class
class Stack
{
private :
    Node *top; // Pointer to the top of the node stack
};