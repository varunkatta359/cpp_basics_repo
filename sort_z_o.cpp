#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int> v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr==0]){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } 

}

int main(){
    int n;
    cin>>n;
    cout<<"v";
    vector<int> v(n);
    for (int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } 

    sortZeroesAndOnes(v);

   
    return 0; 
}