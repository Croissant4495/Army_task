#ifndef VEHICLES_H
#define VEHICLES_H

#include <iostream>
#include <string>

using namespace std;

class vehicles
{
public:
    string name;
    string special_funcionility ;

    virtual void fire ()=0;
    virtual void Move ()=0;
    virtual void report ()=0;

};

class tank : public vehicles
{
public:
    tank(string n, string S);
    void fire ();
    void Move();
    void report();
} ;

class helicopter : public vehicles
{
public:
    helicopter(string n, string S);
    void fire ();
    void Move();
    void report();
};


#endif