#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node (int value){
        data = value;
        next = nullptr;
    }
};

class Linkedlist{
private:
    Node* head;
public:
    Linkedlist(){
        head=nullptr;
    }

    void insert(int data){
        Node* nnode = new Node(data);
        if(head==nullptr){
            head = nnode;
        }
        else{
            Node* current = head;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next = nnode;
        }
    }

    void printlist(){
        Node* current = head;
        while(current != nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
};

int main() {
    Linkedlist list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.printlist();
    return 0;
}
