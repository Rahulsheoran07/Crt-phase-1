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

// Function to detect cycle
bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // Move 1 step
        fast = fast->next->next; // Move 2 steps

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // Creating linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Creating cycle
    head->next->next->next->next = head->next;

    // Checking cycle
    if (hasCycle(head))
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle Found" << endl;
    }

    return 0;
}