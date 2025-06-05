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

    //IsEmpty operation: Check if stack is empty
    bool isEmpty()
    {
        return top = NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }

    // Pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." <<endl;
            return; // If the stack is empty, print a message and return
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node
    }

   // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if(isEmpty())
        {
            cout << "List is empty." << endl;
            return; //If the stack is empty. print a message and return
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return the value of the top node

    }

};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";

}