#include "doublyLinkedList.cpp"
class Stack:public DoublyLinkedList{
    public:
    Stack():DoublyLinkedList(){}
    void push(int data){
        DoublyLinkedList::addBack(data);
    }
    int pop(){
        int temp = DoublyLinkedList::getBack();
        DoublyLinkedList::removeBack();
        return temp;
    }
    int peek(){
        return DoublyLinkedList::getBack();
    }
    void print(){
        DoublyLinkedList::printForward();
    }
};