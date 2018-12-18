#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
class DoublyLinkedList{
    public:
    Node *head;
    Node *tail;
    int total=0;
    DoublyLinkedList(){
        head=tail=nullptr;
    }
    void addBack(int data){
        // if(total==0){
        //     Node *temp = new Node(data);
        //     head=temp;
        //     tail=temp;
        //     total++;
        // }
        // else{
        //     Node *temp = new Node(data);
        //     head->next=temp;
        //     temp->prev=head;
        //     tail = temp;
        //     total++;
        // }
            if(total==0){
            head = new Node(data);
            tail = head;
            total++;
        } else {
            Node *temp = new Node(data);
            tail->next = temp;
            Node *temp2 = temp;
            temp2->prev= tail;
            tail = tail->next;
            total++;
        }
    }
    void printForward(){
        for(Node* i = head;i!=nullptr;i=i->next){
            cout << i->data<<" ";
        }
    }
    void printBackward(){
        for(Node* i = tail;i!=nullptr;i=i->prev){
            cout << i->data<<" ";
        }
    }
    void getCount(){
        cout<< total<<endl;
    }
};
int main(){
    DoublyLinkedList list;
    list.addBack(5);
    list.addBack(6);
    list.addBack(7);
    list.addBack(8);
    list.addBack(9);
    list.addBack(1);
    list.printForward();
    return 0;
}