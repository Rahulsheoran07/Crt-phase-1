#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Delete Given Node
void deleteNode(Node *node)
{
    node->data = node->next->data;
    node->next = node->next->next;
}

// Print List
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(1);
    head->next->next->next = new Node(9);

    cout << "Original List: ";
    printList(head);

    // Delete node with value 5
    deleteNode(head->next);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}