#include "Queue.h"
#include "Queue.h"
#include <iostream>
using namespace std;
//constructor
Queue::Queue()
{
    front = -1;
    rear = -1;
}
//destructor
Queue::~Queue()
{
}

bool Queue::Empty()
{
    return (front == -1);
}
// if full retrun true
bool Queue::Full()
{
    return (rear == 199);
}
// add element at tail(rear)
void Queue::enqueue(int x)
{
    if (Full())
    {
        cout << "Queue is Full!" << endl;
        return;
    }

    if (front == -1)   // inserting first element
        front = 0;

    rear++;
    arr[rear] = x;

}
// remove element from head(front)
int Queue::dequeue()
{
    if (Empty())
    {
        cout << "Queue is Empty!" << endl;
        return -1;
    }

    int temp = arr[front];

    if (front == rear)  // only one element remaining
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }

    return temp;
}


