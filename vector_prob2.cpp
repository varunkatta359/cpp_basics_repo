// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(9);
//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
//     int even_sum = 0,odd_sum = 0;
//     for(int ele:v){
//         if(v[ele]%2==0){
//             even_sum+=ele;
//         }
//         else{
//             odd_sum+=ele;
//         }
//     }
//     cout<<"difference between sum of even and odd indeces elements is : "<<even_sum-odd_sum<<endl;
// }

#include<iostream>
#include<vector>
using namespace std;

void diff(vector<int> v){
    // vector<int> v(9);
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    int es=0,os=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0)
            es+=v[i];
        
        else
            os+=v[i];
        
    

    }
    cout<<"diff is"<<os-es<<endl;

}

int main(){
    vector<int> v(9);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    diff(v);
    return 0;
}