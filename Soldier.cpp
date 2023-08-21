#include "Soldier.h"

offensive :: offensive(string n,double d,string R)
    {
        name=n;
        damage =d;
        Rank =R;
    }
void offensive :: attack(){
        cout << "offensive attack" << endl;
    }

void offensive :: defend(){
        cout << "Offensive defense" << endl;
    }

void offensive :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", Rank: " << Rank << endl;
    }


defensive :: defensive(string n,double d,string R){
    {
        name=n;
        damage =d;
        Rank =R;
    }
}
void defensive :: attack(){
        cout << "Defensive attack" << endl;
    }

void defensive :: defend(){
        cout << "Defensive defense" << endl;
    }

void defensive :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", Rank: " << Rank << endl;
    }


adaptable :: adaptable(string n,double d,string R){
    {
        name=n;
        damage =d;
        Rank =R;
    }
}
void adaptable :: attack(){
        cout << "Adaptable attack" << endl;
    }

void adaptable :: defend(){
        cout << "Adaptable defense" << endl;
    }

void adaptable :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", Rank: " << Rank << endl;
    }