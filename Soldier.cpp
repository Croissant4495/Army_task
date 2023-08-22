#include "Soldier.h"

string arr[4] = {"Engineer", "Knight", "Sniper", "Medic"};

offensive :: offensive(string n)
    {
        name=n;
        damage = 15;
        speciality = arr[rand() % 4];

    }
void offensive :: attack(){
        cout << "offensive attack" << endl;
    }

void offensive :: defend(){
        cout << "Offensive defense" << endl;
    }

void offensive :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", speciality: " << speciality << endl;
    }


defensive :: defensive(string n){
    {
        name=n;
        damage = 5;
        speciality = "Rookie";
    }
}
void defensive :: attack(){
        cout << "Defensive attack" << endl;
    }

void defensive :: defend(){
        cout << "Defensive defense" << endl;
    }

void defensive :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", speciality: " << speciality << endl;
    }


adaptable :: adaptable(string n){
    {
        name=n;
        damage = 10;
        speciality = "Rookie";
    }
}
void adaptable :: attack(){
        cout << "Adaptable attack" << endl;
    }

void adaptable :: defend(){
        cout << "Adaptable defense" << endl;
    }

void adaptable :: report(){
        cout << "Name : " << name << ", Damage: " << damage << ", speciality: " << speciality << endl;
    }