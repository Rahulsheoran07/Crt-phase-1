#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed into stack\n";
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    return 0;
}