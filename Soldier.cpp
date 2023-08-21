#include "Soldier.h"

offensive :: offensive(string n)
    {
        name=n;
        damage = 15;
        Rank = "Rookie";
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


defensive :: defensive(string n){
    {
        name=n;
        damage = 5;
        Rank = "Rookie";
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


adaptable :: adaptable(string n){
    {
        name=n;
        damage = 10;
        Rank = "Rookie";
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