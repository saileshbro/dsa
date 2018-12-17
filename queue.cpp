#include "singlyLinkedList.cpp"
class Queue: public LinkedList{
    public:
    Queue():LinkedList(){}
    void enqueue(int data){
        LinkedList::addBack(data);
    }
    void dqueue(){
        LinkedList::removeFront();
    }
    void print(){
        LinkedList::print();
    }
};
int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(11);
    queue.enqueue(12);
    queue.enqueue(13);
    queue.enqueue(14);
    queue.enqueue(15);
    queue.print();
    queue.dqueue();
    queue.print();
    return 0;
}