#include <iostream>
using namespace std;

// Creating Node
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{

    // Creating nodes
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // Connecting nodes
    head->next = second;
    second->next = third;

    // Printing linked list
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}