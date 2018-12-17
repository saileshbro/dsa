#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
class LinkedList{
    Node  *head;
    Node  *curr;
    int count=0;
    public:
    void addBack(int data){
        if(count==0){
            head = new Node(data);
            head->next = nullptr;
            curr = head;
            count++;
        } else {
            Node *temp = new Node(data);
            curr->next = temp;
            curr = curr->next;
            count++;
        }
    }
    void addFront(int data){
        if(count==0){
            head = new Node(data);
            head->next = nullptr;
            curr = head;
            count++;
        }
        else{
            Node *temp = new Node(data);
            temp->next=head;
            head=temp;
            count++;
        }
    }
    void removeFront(){
        Node  *temp = head;
        head=head->next;
        delete temp;
        count--;
    }
    void removeBack(){
        Node *temp = head;
        if(temp->next==nullptr){
            delete temp;
            head= nullptr;
            count--;
        }
        else{
            while (temp){
            if (temp->next == curr){
                delete curr;
                temp->next = NULL;
                curr = temp;
                count--;
                break;
            }
            temp = temp->next;
            }
        }
    }
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->data <<" ";
            temp=temp->next;
        }
        cout << endl;
        cout<<"number of nodes "<<count<<endl;
    }
    int getFront(){
        return head->data;
    }
    LinkedList(){
        head = nullptr;
    }

    int getCount(){
        return count;
    }
};
int main(){
    LinkedList list;
    list.addBack(5);
    list.addBack(6);
    list.addBack(18);
    list.addFront(10);
    list.print();
    list.removeFront();
    list.removeBack();
    list.addFront(45);
    list.addBack(4);
    list.print();
    return 0;
}