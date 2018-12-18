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
        if(count==0){
            cout<<"OVERFLOW";
            return;
        }else{
        Node  *temp = head;
        head=head->next;
        delete temp;
        count--;
        }
    }
    void removeBack(){
        if(count==0){
            cout<<"OVERFLOW";
            return;
        }else{
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
    }
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->data <<" ";
            temp=temp->next;
        }
        cout << endl;
    }
    int getFront(){
        return head->data;
    }
    int getBack(){
        return curr->data;
    }
    LinkedList(){
        head = nullptr;
    }

    int getCount(){
        return count;
    }
};
