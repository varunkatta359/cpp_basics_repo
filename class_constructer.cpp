#include<iostream>
using namespace std;


class Character{
    public:
        string name;
        int strength;
        double rating;
    //class constructer
    Character(string n,int s,double r){
        this->name = n;
        this->strength = s;
        this->rating = r;
    }
};

int main(){
    Character C1("Superman",1000,9.75);

    cout<<C1.name<<endl<<C1.strength<<endl<<C1.rating<<endl;

    return 0;
}