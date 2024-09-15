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

    void rev(){
        Node *current,*prev,*next;
        prev=nullptr;
        current=head;
        while(current!=nullptr){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }

    void printlist(){
        Node* current=head;
        cout<<"list elements :"<<endl;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }

    // void rev(){
    //     Node*current,*prev,*next;
    //     current=head;
    //     prev=nullptr;
    //     while(current!=nullptr){
    //         next=current->next;
    //         current->next=prev;
    //         prev=current;
    //         current=next;
    //     }
    //     head=prev;

    // }
};

int main(){
    Linkedlist l;
    l.insert_beg(1);
    l.insert_beg(2);
    l.insert_beg(3);
    l.printlist();
    l.rev();
    // l.insert_beg(0);
    l.printlist();

}