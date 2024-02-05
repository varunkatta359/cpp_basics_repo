#include <iostream>
using namespace std;

//function template
template <typename T, typename U>
auto max(T x, U y){  
    //comprehension
    return (x > y) ? x : y;
}


int main(){
    cout <<max(5,6.4)<<endl;

    return 0;
}