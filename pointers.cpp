#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int* ptr = &n;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}