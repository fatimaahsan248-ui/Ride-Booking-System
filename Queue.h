#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    public:
        //constructor
        Queue();
        //destructor
        virtual ~Queue();
        //queue is empty or not
        bool Empty();
        //queue is full or not
        bool Full();
        //add element
        void enqueue(int x);
        //remove element
        int dequeue();

    protected:

    private:
        int arr[200];
        int front;
        int rear;
};

#endif // QUEUE_H
