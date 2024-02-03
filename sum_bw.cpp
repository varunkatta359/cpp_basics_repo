#include<iostream>
using namespace std;
int sum_of_the_nums(int x,int y){
    int result;
    int d=1;
    int n=(y-x+1);
    result = (n*(2*x+(n-1)*d))/2;
    return result;
}
int main(){
    int last,first;
    cout<<"enter the first num"<<endl;
    cin>>first;
    cout<<"enter the last num"<<endl;
    cin>>last;
    cout<<sum_of_the_nums(last,first)<<endl;
}