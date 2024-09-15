#include <iostream>
using namespace std;

int missing_ele(int arr[],int n,int last,int first){
    
    int sum = ((n+1) * (last+first)) / 2; 
    int arrSum = 0;
    for (int i=0;i<n;i++) {
        arrSum += arr[i];
    }
    return sum - arrSum;
}

int main(){
    int arr[]={1,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    int last=0;
    for(int i=0;i<n;i++){
        if(arr[i]>last){
            last=arr[i];
        }
        if(arr[i]<first){
            first=arr[i];
        }
    }
    cout<<missing_ele(arr,n,last,first)<<endl;
}