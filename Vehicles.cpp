#include "Vehicles.h"

tank :: tank(string n)
{
    name=n;
    special_funcionility = "Power Shot";
    damage = 20;
}

helicopter :: helicopter(string n){
    name=n;
    special_funcionility = "Fly and shoot";
    damage = 10;
}

void tank:: fire()
{
    cout << "Tank is firing " << endl;
}

void helicopter :: fire()
{
    cout << "Helicopter is firing" << endl;
}
void tank:: Move()
{
    cout << "Tank is moving" << endl;
}

void helicopter :: Move()
{
    cout << "Helicopter is moving" << endl;
}

void tank:: report()
{
    cout << "Name : " << name << ", special_funcionility: " << special_funcionility<< endl ;
}

void helicopter :: report()
{
    cout << "Name : " << name << ", special_funcionility: " << special_funcionility << endl;
}
