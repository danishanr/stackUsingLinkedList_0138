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

public :
    Stack() 
    {
        top = NULL; // Initialize the stack with a null top pointer
    }
    
    // Push opertation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node();     // 1. Allocate memory for the new node
        newNode->data = value;          // 2. Assign value
        newNode->next = top;            // 3. Set the pointer of the new node to the current
        top = newNode;                  // 4. Update the top pointer to the new node
        cout << "Push value : " << value << endl;
        return value;
    }


};