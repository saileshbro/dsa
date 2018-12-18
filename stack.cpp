#include "singlyLinkedList.cpp"
class Stack:public LinkedList{
    public:
    Stack():LinkedList(){}
    void push(int data){
        LinkedList::addBack(data);
    }
    void pop(){
        int temp = LinkedList::getBack();
        LinkedList::removeBack();
        return temp;
    }
    void print(){
        LinkedList::print();
    }
    int peek(){
        return LinkedList::getBack();
    }
};
int main(){
    Stack stack;
    stack.push(10);
    stack.push(22);
    stack.push(19);
    stack.pop();
    stack.push(13);
    stack.print();
}