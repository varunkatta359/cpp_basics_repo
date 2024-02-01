#include<iostream>
#include<cmath>
using namespace std;

double add(double num1,double num2){
    cout<<"This function returns addition of the two numbers"<<endl;
    return num1+num2;//returning multiple values using comma operator
}

int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<"power"<<pow(a,b)<<endl;
    cout<<"sqrt "<<sqrt(a)<<" "<<sqrt(b)<<endl;
}