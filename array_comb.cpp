#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,3,7,4,9};
    int num;
    cin>>num;
    int size=sizeof(arr)/sizeof(arr[0]);

    
    for (int j=0;j<=size;j++){
        for (int i=j+1;i<=size;i++){
            if (arr[j]+arr[i]==num){
                cout<<"pair found "<<i<<" "<<j<<" elements add to get num"<<endl;
                

            }
           
            
        }
    }
}