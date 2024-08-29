#include<iostream>
#include <string>
using namespace std;

int main(){
    string s="varun";
    string rev;
    // for (int i=s.size()-1;i>=0;--i){
    //     rev+=s[i];
    // }
    // cout<<rev<<endl;

    rev=string(s.rbegin(),s.rend());
    cout<<rev<<endl;
}