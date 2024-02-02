#include<iostream>
using namespace std;

int main()
{
    int array[]={3,45,2,23,43};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int idx=0;idx<size;idx++){
        sum+=array[idx];
    }
    cout<<"sum of the array elements is:"<<sum<<endl;
}