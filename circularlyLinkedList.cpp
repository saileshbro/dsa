#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
class CircularlyLinkedList{
    public:
    int data;
    Node *head,*tail;
    int total=0;
    CircularlyLinkedList(){
        head=tail=nullptr;
    }
    void addFront(int data){
        if(total==0){
            head = new Node(data);
            head->next = head;
            tail = head;
            total++;
        }
        else{
            Node *temp = new Node(data);
            temp->next=head;
            head=temp;
            tail->next=head;
            total++;
        }
    }
    void addBack(int data){
            if(total==0){
            head = new Node(data);
            head->next = head;
            tail = head;
            total++;
        }
        else{
            Node *temp = new Node(data);
            tail->next=temp;
            tail=temp;
            temp->next=head;
            total++;
        }
    }
    void print(){
        Node *temp = head;
        int temp2=total;
        while(temp2){
            cout<<temp->data<<" ";
            temp=temp->next;
            temp2--;
        }
    }
};
int main(){
    CircularlyLinkedList list;
    list.addBack(5);
    list.addBack(6);
    list.addBack(7);
    list.print();
    return 0;
}