#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <iostream>
#include <string>
#include <random>

using namespace std;

class soldiers
{
public:
    string name;
    double damage;
    string special_ability;
    string speciality;
  
    virtual void defend ()=0;
    virtual void report ()=0;
    virtual void attack ()=0;

};
class offensive : public soldiers
{
public:
    offensive(string n);
    void attack ();
    void defend();
    void report();
} ;
class defensive : public soldiers
{   
public:
    defensive (string n);
    void attack ();
    void defend();
    void report();

} ;
class adaptable : public soldiers
{
public:
    adaptable(string n);
    void attack ();
    void defend();
    void report();
} ; 
#endif