#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=nullptr;
    }
    
};

class Linkedlist{
private:
    Node* head;
public:
    Linkedlist(){
        head=nullptr;
    }

    void insert_beg(int data){
        Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        
    }

    void printlist(){
        Node* current=head;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};

int main(){
    Linkedlist l;
    l.insert_beg(1);
    l.insert_beg(2);
    l.insert_beg(3);
    l.printlist();
}