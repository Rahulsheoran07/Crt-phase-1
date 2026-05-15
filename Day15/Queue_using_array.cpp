#include <iostream>
using namespace std;
class Queue
{
private:
    int arr[100];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }
    // Enqueue
    void enqueue(int x)
    {
        if (rear == 99)
        {
            cout << "Queue Overflow" << endl;
        }
        else
        {
            rear++;
            arr[rear] = x;
            cout << x << " inserted" << endl;
        }
    }
    // Dequeue
    void dequeue()
    {
        if (front > rear)
        {
            cout << "Queue Underflow" << endl;
        }
        else
        {
            cout << arr[front] << " deleted" << endl;
            front++;
        }
    }
    // Front Element
    void peek()
    {
        if (front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element: " << arr[front] << endl;
        }
    }
    // Display Queue
    void display()
    {
        if (front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.peek();
    return 0;
}