#include<iostream>
using namespace std;

int main(){
    int arr[]={3,6,3,7,4,9};
    int num;
    cin>>num;
    int size=sizeof(arr)/sizeof(arr[0]);
    int flag=0;

    
    for (int j=0;j<=size;j++){
        for (int i=j+1;i<=size;i++){
            if (arr[j]*arr[i]==num){
                cout<<"pair found "<<arr[i]<<" "<<arr[j]<<" elements multiply to get num"<<endl;
                flag+=1;
            }

           
            
        }
    }
    if(flag>=1){
        return 0;
    }
    else{
        cout<<"pair not found"<<endl;
    }
}