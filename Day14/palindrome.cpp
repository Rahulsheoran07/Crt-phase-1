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

// Reverse Linked List
Node *reverse(Node *head)
{
    Node *prev = NULL;

    while (head != NULL)
    {
        Node *nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }

    return prev;
}

// Check Palindrome
bool isPalindrome(Node *head)
{

    if (head == NULL || head->next == NULL)
        return true;

    // Find middle
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    Node *secondHalf = reverse(slow);

    // Compare both halves
    Node *firstHalf = head;

    while (secondHalf != NULL)
    {
        if (firstHalf->data != secondHalf->data)
        {
            return false;
        }

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

int main()
{

    // Create linked list: 1 -> 2 -> 2 -> 1
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    if (isPalindrome(head))
    {
        cout << "Palindrome Linked List" << endl;
    }
    else
    {
        cout << "Not a Palindrome Linked List" << endl;
    }

    return 0;
}