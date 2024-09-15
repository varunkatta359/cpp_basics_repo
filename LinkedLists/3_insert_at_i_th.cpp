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

//     void insert_ith(int data,int i){
//         Node* newnode=new Node(data);
//         if(i==1){
//             newnode->next=head;
//             head=newnode;
//             return;
//         }
//         Node* current=head;
//         for(int k=0;k<i-2;i++){
//             current=current->next;
//         }
//         newnode->next=current->next;
//         current->next=newnode;
//     }
//     void printlist(){
//         Node* current=head;
//         cout<<"list elements are"<<endl;
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Linkedlist l;
//     l.insert_ith(1,1);//1
//     l.insert_ith(2,2);//1,2
//     l.insert_ith(3,1);//3,1,2
//     l.insert_ith(5,2);//3,5,1,2
//     l.insert_ith(7,1);//7,3,5,1,2
//     l.printlist();
// }

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
    void insert_ith(int data,int n){
        Node* newnode=new Node(data);
        if(n==1){
            newnode->next=head;
            head=newnode;
            return;
        }
        Node* current=head;
        for(int i=0;i<n-2;i++){
            current=current->next;
        }
        newnode->next=current->next;
        current->next=newnode;
    }
    void printlist(){
        Node* current=head;
        cout<<"List elements are:"<<endl;
        while(current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }

};
int main(){
    Linkedlist l;
    l.insert_ith(1,1);//1
    l.insert_ith(2,2);//1,2
    l.insert_ith(3,1);//3,1,2
    l.insert_ith(5,2);//3,5,1,2
    l.insert_ith(7,1);//7,3,5,1,2
    l.printlist();
}