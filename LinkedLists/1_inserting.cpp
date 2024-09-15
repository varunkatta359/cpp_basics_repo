// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node (int value){
//         data = value;
//         next = nullptr;
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
//         Node* nnode = new Node(data);
//         if(head==nullptr){
//             head = nnode;
//         }
//         else{
//             Node* current = head;
//             while(current->next != nullptr){
//                 current = current->next;
//             }
//             current->next = nnode;
//         }
//     }

//     void printlist(){
//         Node* current = head;
//         while(current != nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     Linkedlist list;
//     list.insert(1);
//     list.insert(2);
//     list.insert(3);
//     list.printlist();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <string>
// 
// class Node{
// public:
    // string data;
    // Node* next;
// 
    // Node(string value){
        // data=value;
        // next=nullptr;
    // }
// };
// 
// class Linkedlist{
// private:
    // Node* head;
// public:
    // Linkedlist(){
        // head=nullptr;
    // }
// 
    // void insert(string data){
        // Node* newnode=new Node(data);
        // if(head==nullptr){
            // head=newnode;
        // }
        // else{
            // Node* current=head;
            // while(current->next!=nullptr){
                // current=current->next;
            // }
            // current->next=newnode;
        // }
    // }
// 
    // void printlist(){
        // Node* current=head;
        // while(current!=nullptr){
            // cout<<current->data<<" ";
            // current=current->next;
        // }
        // cout<<endl;
// 
    // }
// };
// 
// int main(){
    // Linkedlist list;
    // list.insert("varun");
    // list.insert("and");
    // list.insert("sruthi");
    // list.printlist();
// }
// 

// <<<<<#include <iostream>
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
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Linkedlist list;
//     list.insert(1);
//     list.insert(4);
//     list.insert(3);
//     list.printlist();
// }


// #include <iostream>
// using namespace std;
// #include <string>

// class Node{
// public:
//     string data;
//     Node* next;

//     Node(string value){
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

//     void insert(string data){
//         Node* newnode= new Node(data);
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
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }

//     void ReturnAddresses(){
//         Node* current=head;
//         while(current!=nullptr){
//             cout<<"["<<current->data<<"]"<<" is at the location "<<current<<endl;
//             current=current->next;
//         }
//         cout<<endl;
//     }
// };

// int main(){
//     Linkedlist Ls;
//     Ls.insert("Varun");
//     Ls.insert("and");
//     Ls.insert("Kusuma");
//     Ls.insert("were");
//     Ls.insert("together !");
//     Ls.printlist();
//     Ls.ReturnAddresses();
    
//     return 0;
// }

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
//         while(current!=nullptr){
//             cout<<current->data<<" ";
//             current=current->next;
//         }
//         cout<<endl;
//     }

// };



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

    void insert_end(int data){
        Node* newnode=new Node(data);
        if(head==nullptr){
            head=newnode;
            return;
        }
        Node* current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        current->next=newnode;
    }

    void insert_beggining(int data){
        Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;
    }

    void insert_at_nth(int data,int n){
        Node* newnode=new Node(data);
        if(n==1){
            newnode->next=head;
            head=newnode;
            return;
        }
        Node* current=head;
        for(int i=0;i<n-2;i++){
            current=current->next;//current=(n-1)th position
        }
        newnode->next=current->next;
        current->next=newnode;
    }

    void delete_ele(int n){
        Node* current,*temp;
        current=head;
        for(int i=0;i<n-2;i++){
            current=current->next;
        }
        temp=current->next;
        current->next=temp->next;
        delete temp;
    }

    void rev_list(){
        Node* current,*prev,*next;
        current=head;
        prev=nullptr;
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
    l.insert_end(2);
    l.insert_end(4);
    l.printlist();
    l.insert_beggining(0);
    l.printlist();
    l.insert_at_nth(1,2);
    l.insert_at_nth(3,4);
    l.printlist();
    l.delete_ele(2);
    l.delete_ele(3);
    l.printlist();
    l.rev_list();
    l.printlist();

}