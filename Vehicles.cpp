#include "Vehicles.h"

tank :: tank(string n,string s)
{
    name=n;
    special_funcionility=s;
}

helicopter :: helicopter(string n,string s){
    name=n;
    special_funcionility=s;
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
