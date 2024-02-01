#include <iostream>
using namespace std;

int main()
{
    int sum,num;
    sum=0;
    cin>>num;
    
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    
    cout<<sum<<endl;

}