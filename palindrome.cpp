#include <iostream>
#include <string>

bool isPalindrome(const std::string& str){
    int start=0;
    int end=str.length<()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    std::string s;
    std::cin>>s;
    if(isPalindrome(s)){
        std::cout<<"is palindrome"<<std::endl;

    }
    else{
        std::cout<<"is'nt a palindrome"<<std::endl;
    }

    return 0;
}