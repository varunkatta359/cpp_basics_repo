#include<iostream>
using namespace std;

int main(){
    int array[]={3,43,54,32,33};
    int num;
    cin>>num;
    int ans=-1;
    
    for(int i=0;i<5;i++){
        if(num==array[i]){
           ans=i;
           break;
        }

    }
    cout<<ans<<endl;
}