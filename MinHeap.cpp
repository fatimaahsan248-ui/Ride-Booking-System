#include "MinHeap.h"
// constructor
MinHeap::MinHeap()
{
 size=0;
    //ctor
}
//destructor
MinHeap::~MinHeap()
{
    //dtor
}
//check if heap is empty
bool MinHeap::Empty(){
   return size==0;
}
//restore minheap property
void MinHeap::percolateUp(int hole){
// move node up
HeapNode temp=heap[hole];
// continue untill parent is maximum
while(hole>1 && temp.distance< heap[hole/2].distance){
    heap[hole]=heap[hole/2];
    hole/=2;


}
// put node at correct position
heap[hole]=temp;
}
//insert new node in heap
void MinHeap ::insert (int distance,int index){
     size++;  // increase heap size
     heap[size].distance=distance;
     heap[size].index=index;
     percolateUp(size);       // fix order

}
 // move node down to restore property
void MinHeap ::percolateDown(int hole){
   int child;
   HeapNode temp=heap[hole];
   while(hole*2 <=size){
    child=hole*2;
    if(child!=size && heap[child+1].distance < heap[child].distance)
    child++;
    if(heap[child].distance<temp.distance){
        heap[hole]=heap[child];
        hole=child;


    }
    else
        break;


}
heap[hole]=temp;


}
// return minimum element from heap
   HeapNode MinHeap::extractMin(){
   HeapNode minNode=heap[1];  // root contain minimm
    heap[1]=heap[size--];      // move last element to root
    percolateDown(1);          // restore propet
    return minNode;

   }
// update distane
void MinHeap::updateKey(int index ,int newDist){
    ///search for node at goven index
for(int i=0;i<=size;i++){
    if(heap[i].index==index){
       heap[i].distance=newDist;
       // move node upwad
       percolateUp(i);
       //move node downword
       percolateDown(i);
       return;


       }


}

}
