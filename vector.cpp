#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vex;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        vex.push_back(element);
    }
    //1
    for(int i=0;i<vex.size();i++){
        cout<<"element "<<i+1<<" is "<<vex[i]<<endl;
    }
    vex.insert(vex.begin()+3,4); 
    //2
    for(int ele:vex){
        cout<<ele<<endl;
    }
    vex.erase(vex.end()-2);
    cout<<endl;
}