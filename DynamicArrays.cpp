#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int* Array = new int[size];
    cout<<"Enter the array elements:"<<endl;

    for(int i=0;i<size;i++){
        cout<<"Array["<<i<<"] is ";
        cin>>Array[i];
    }

    for(int i=0;i<size;i++){
        cout<<Array[i]<<"   ";
    }
    delete[]Array;
    Array = NULL;

    return 0;

}