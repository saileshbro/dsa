#include <iostream>

using namespace std;
#define SIZE 100
 int arr[SIZE];
 int front,rear;

class array{
    
        public:
        
        array(){
            front=rear=-1;
        }
       int Isempty(){
          if(front==-1&&rear==-1) {
              return 1;
          } else
               return 0;
        }
        
        int Isfull(){
            
            if(rear>=SIZE-1){
                return 1;
            }else
               return 0;
        }
        
        void addElement(int a){
            if(Isempty()){
                front=rear=0;
                arr[rear]=a;
            }else if(Isfull()){
              cout<<"There is no place to insert another element"<<endl;
            }
            else{
                rear++;
                arr[rear]=a;
            }
        }
        
        int getfront(){
            return arr[front];
        }
        
        int deleteElement(){
            if(Isempty()){
                cout<<"There are no elements to delete"<<endl;
            }else{
                int temp = getfront();
                front++;
                return temp;
            }
        }
        
        int getback(){
            return arr[rear];
        }
        
        void printElements(){
            int i;
            for(i=front;i<=rear;i++){
                
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

class Queue:public array{
    
    public:
    
    Queue():array(){
    }
    
    void enqueue(int a){
        addElement(a);
    }
    
    int dequeue(){
        deleteElement();
    }
    
    void print(){
        printElements();
    }
};

int main(){
    
    Queue queue;
    queue.enqueue(2);
    queue.enqueue(5);
    queue.enqueue(7);
    queue.dequeue();
    queue.enqueue(10);
    queue.enqueue(5);
    queue.dequeue();
    queue.print();
}