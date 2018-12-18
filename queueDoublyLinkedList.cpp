#include "doublyLinkedList.cpp"
class Queue:public DoublyLinkedList{
    public:
    Queue():DoublyLinkedList(){}
    void enqueue(int data){
        DoublyLinkedList::addBack(data);
    }
    int dequeue(){
        int data = DoublyLinkedList::getFront();
        DoublyLinkedList::removeFront();
        return data;
    }
    void print(){
        DoublyLinkedList::printForward();
    }
};
int main(){
    Queue queue;
    queue.enqueue(5);
    queue.enqueue(6);
    cout << queue.dequeue();
}