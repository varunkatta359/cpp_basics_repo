#include<iostream>
using namespace std;

int main(){
    int array[]={4,5,6,3,95};
    int max=array[0];
    for (int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
        else{
            continue;
        }
    }
    cout<<"max is:"<<max<<"\n";



}