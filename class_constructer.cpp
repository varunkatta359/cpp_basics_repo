#include<iostream>
using namespace std;
//Abstraction
class AbstractCharacterStrength{
    virtual void DetermineStrength()=0;
};

class Character:AbstractCharacterStrength{
// Encapsulation
private:
    int Strength;
    double Rating;
protected:
    string Name;
public:
  
    void setname(string name){
        Name = name;
    }
    string getname(){
        return Name;
    }
    void setstrength(int strength){
        Strength = strength;
    }
    int getstrength(){
        return Strength;
    }
    void setrating(double rating){
        Rating = rating;
    }
    double getrating(){
        return Rating;
    }
    Character(string n,int s,double r){
        Name = n;
        Strength = s;
        Rating = r;
    }
    void IntroduceCharacter(){
        cout<<"Name: "<<Name<<endl<<"strength:"<<Strength<<endl<<"rating:"<<Rating<<endl;
    }

    void DetermineStrength(){
        if(Strength>950)
            cout<<"This character is very strong"<<endl;
        else
            cout<<"This character is not very strong"<<endl;
    }

    virtual void Responsibility(){
        cout<<Name<<" character is responsible for saving the city!"<<endl;
    }

};

class CharacterUniverse :public Character {
public:    
    string Universe;
    CharacterUniverse(string n,int s,double r,string u):Character(n,s,r){
            Universe = u;
    }
    
    void UniverseOfCharacter(){
        cout<<Name<<"'s universe is "<<Universe<<endl;
    }

    void Responsibility(){
        cout<<Name<<" character is responsible for saving his Town in "<<Universe<<" universe!"<<endl;
    }
};

int main(){
    Character C1 = Character("Superman",1000,9.75);
    CharacterUniverse Cu2 = CharacterUniverse("Batman",850,9.5,"DCU");
    
    // C1.IntroduceCharacter();
    // // cout<<C1.getname();

    // C1.DetermineStrength();
    // Cu2.UniverseOfCharacter();
    // Cu2.IntroduceCharacter();
    Character* Batman = &Cu2;
    Batman->Responsibility();

    
    return 0;
}