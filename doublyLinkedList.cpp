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
    void addFront(int data){
        if(total==0){
            head = new Node(data);
            tail = head;
            total++;
        }
        else{
            Node *temp = new Node(data);
            head->prev=temp;
            Node *temp2 = temp;
            temp2->next=head;
            head = head->prev;
            total++;
        }
    }
    void removeFront(){
        if(total==0){
            cout <<"UNDERFLOW";
            return;
        }
        else{
            Node *temp = head;
            head = head->next;
            head->prev=nullptr;
            delete temp;
            total--;
        }
    }
    void removeBack(){
        if(total==0){
            cout <<"UNDERFLOW";
            return;
        }
        else{
            Node *temp = tail;
            tail = tail->prev;
            tail->next=nullptr;
            delete temp;
            total--;
        }
    }
    void printForward(){
        for(Node* i = head;i!=nullptr;i=i->next){
            cout << i->data<<" ";
        }
        cout<<endl;
    }
    void printBackward(){
        for(Node* i = tail;i!=nullptr;i=i->prev){
            cout << i->data<<" ";
        }
        cout<<endl;
    }
    Node* findNode(int data){
        Node *temp = nullptr;
        if(total == 0){
            return temp;
        }
        else{
            for(Node *i=head,*j=tail;i!=nullptr,j!=nullptr;i=i->next,j=j->prev){
                if(i->data==data || j->data==data){
                    (i->data==data)?temp=i:temp=j;
                    break;
                }
            }
        }
        return temp;
    }
    int getFront(){
        return head->data;
    }
    int getBack(){
        return tail->data;
    }
    int getCount(){
        return total;
    }
};