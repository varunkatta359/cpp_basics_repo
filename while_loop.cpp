#include<iostream>
using namespace std;

int main()
{
    int sum,num;
    sum = 0;
    cout<<"enter the num"<<endl;
    cin>>num;

    int i=1;
    while(i<=num)
    {
        sum += i;
        i++;
    }
    
    cout<<"The sum of first "<<num<<" natural numbers is:"<<sum<<endl;


}