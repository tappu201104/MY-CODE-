#include <iostream>
using namespace std;
// implementation queue using circular array, circular queue
class Queue
{
    int *arr;
    int front, rear, size;

public:
    // constructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    // If queue is empty or not
    bool IsEmpty()
    {
        return front == -1;
    }
    // Queue is full or not
    bool IsFull()
    {
        return (rear + 1) % size == front;
    }
    // push element into queue,end
    void push(int x)
    {
        // empty
        if (IsEmpty())
        {
            cout << "pushed " << x << "  into the queue\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }
        // _full
        else if (IsFull())
        {
            cout << "Queue is overflow\n";
            return;
        }
        // insert
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed " << x << "  into the queue\n";
        }
    }
    // pop element,starting
    void pop()
    {
        // Empty
        if (IsEmpty())
        {
            cout << "Queue is underflow\n";
            return;
        }
        // pop kar do
        else
        {
            if (front == rear)
            {
                cout << "popped  " << arr[front] << "  into the queue\n";
                front = rear = -1;
            }
            else
            {
                cout << "popped  " << arr[front] << "  into the queue\n";
                front = (front + 1) % size;
            }
        }
    }
    // starting me konsa element rakha gya h

    int start()
    {
        if (IsEmpty())
        {
            cout << "queue is Empty\n";
            return -1;
        }
        else
            return arr[front];
    }
};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    q.pop();
    int x = q.start();
    if (!q.IsEmpty())
        cout << x << "";
}
