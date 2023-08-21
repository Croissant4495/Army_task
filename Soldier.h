#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <iostream>
#include <string>

using namespace std;

// Soldiers should be an abstract class that dosent have constructor and subclasses are the ones
class soldiers
{
public:
    string name;
    double damage;
    string special_ability;
    string Rank;

    ~soldiers()
    {
        cout << "THE WAR IS OVER!!";
    }
  
    virtual void defend ()=0;
    virtual void report ()=0;
    virtual void attack ()=0;

};
class offensive : public soldiers
{
public:
    offensive(string n,double d,string R);
    void attack ();
    void defend();
    void report();
} ;
class defensive : public soldiers
{   
public:
    defensive (string n,double d,string R);
    void attack ();
    void defend();
    void report();

} ;
class adaptable : public soldiers
{
public:
    adaptable(string n,double d,string R);
    void attack ();
    void defend();
    void report();
} ; 
#endif