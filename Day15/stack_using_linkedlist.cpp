#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Stack using Linked List
class Stack
{
    Node *top;

public:
    // Constructor
    Stack()
    {
        top = NULL;
    }

    // Push operation
    void push(int value)
    {
        Node *newNode = new Node();

        newNode->data = value;
        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack\n";
    }

    // Pop operation
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node *temp = top;
        cout << top->data << " popped from stack\n";

        top = top->next;
        delete temp;
    }

    // Peek operation
    void peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Top element: " << top->data << endl;
    }

    // Display stack
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
            return;
        }

        Node *temp = top;

        cout << "Stack elements: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}