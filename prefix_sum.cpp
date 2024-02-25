#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,3,7,4,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        arr[i]+=arr[i-1];
    }

    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}