#include <iostream>
using namespace std;

int max_ele(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"arr elements are:"<<endl;
    // for(int i=0;i<n;i++){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<max_ele(arr,n)<<endl;
}