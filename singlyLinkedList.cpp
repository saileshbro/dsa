#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int _data){
        data = _data;
    }
};
class LinkedList{
        public:
    int length;
    Node *head;
    LinkedList(){
        length =0;
        head = NULL;
    }
    void addData(int data){
        Node* node = new Node(data);
        node->next = head;
        head = node;
        length++;
    }
    void printData(){
        Node *temp = head;
        while(temp){
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }

};
int main(){
    LinkedList l;
    l.addData(15);
    l.addData(3);
    l.printData();
    return 0;
}