#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;

    }
    cout<<"factorial of "<<n<<" 5is :"<<factorial<<endl;
}