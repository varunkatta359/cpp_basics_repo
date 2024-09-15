#include <iostream>
#include <string>
using namespace std;

bool str_palindrome(const string& str){
    int start=0;
    int end=str.length()-1;
    while(start<=end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    string s;
    getline(cin,s);
    if(str_palindrome(s)){
        cout<<"Given string is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
}
