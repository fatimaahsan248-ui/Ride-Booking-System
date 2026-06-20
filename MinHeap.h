#ifndef MINHEAP_H
#define MINHEAP_H

struct HeapNode{
int distance;
int index;
};
class MinHeap
{
    public:
        //constructor
        MinHeap();
        //destructor
        virtual ~MinHeap();
        //heap is empty or not
        bool Empty();
        //inset function
        void insert(int distance,int index);
        HeapNode extractMin();
        void updateKey(int index,int newDis);


    protected:

    private:
        HeapNode heap[300];
        int size;
        void percolateUp(int hole);
        void percolateDown(int hole);

};

#endif // MINHEAP_H
