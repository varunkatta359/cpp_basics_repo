#include <iostream>
#include <string>
using namespace std;

string rev_str(const string& str){
    string rev="";
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    return rev;
}

int main(){
    string s;
    getline(cin,s);
    cout<<rev_str(s)<<endl;
    return 0;

}