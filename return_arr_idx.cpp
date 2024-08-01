#include<iostream>
using namespace std;

int main(){
    int array[]={3,43,54,32,33};
    int size=sizeof(array)/sizeof(array[0]);
    int num;
    cin>>num;
    int ans=0;
    
    for(int i=0;i<size;i++){
        if(num==array[i]){
           ans=i;
           break;
        }

    }
    cout<<ans<<endl;
}