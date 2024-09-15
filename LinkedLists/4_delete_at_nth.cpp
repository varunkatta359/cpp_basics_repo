// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int value){
//         data=value;
//         next=nullptr;
//     }
// };
// class Linkedlist{
// private:
//     Node* head;
// public:
//     Linkedlist(){
//         head=nullptr;
//     }
//     void insert(int data){
//         Node* newnode=new Node(data);
//         if(head==nullptr){
//             head=newnode;
//         }
//         else{
//             Node* current=head;
//             while(current->next!=nullptr){
//                 current=current->next;
//             }
//             current->next=newnode;
//         }
//     }
//     void printlist(){
//         Node* current=head;
//         cout<<"elements in the linkedlist are:"<<endl;
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }
//     void delete_ele(int n){
//         Node* current=head;
//         if(n==1){
//             head=current->next;
//             delete current;
//             return;
//         }
//         for(int i=0;i<n-2;i++){
//             current=current->next;
//             //n-1 th
//         }
//         Node* temp=current->next;//(nth)
//         current->next=temp->next;
//         delete temp;
//     }
// };
// int main() {
//     Linkedlist list;
//     list.insert(1);
//     list.insert(2);
//     list.insert(3);
//     list.printlist();
//     list.delete_ele(2);
//     list.printlist();
//     return 0;
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

    void insert(int data){
        Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;
    }

    void printlist(){
        Node* current=head;
        cout<<"elements in the linked list are :"<<endl;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }

    void delete_ele(int n){
        Node* current=head;
        if(n==1){
            head=current->next;
            delete current;
            return;
        }
        for(int i=0;i<n-2;i++){
            current=current->next;
        }
        Node* temp=current->next;
        current->next=temp->next;
        delete temp;
    }
};

int main(){
    Linkedlist l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);//5 4 3 2 1
    l.printlist();
    l.delete_ele(4);
    l.printlist();
    
}