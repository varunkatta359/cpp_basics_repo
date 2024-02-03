#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c = 1;
    for(int i=1;i<=b;i++){
        c*=a;
    }
    //manually
    cout<<a<<" power "<<b<<" is : "<<c<<endl;
    //cmath module
    cout<<pow(a,b)<<endl;
}