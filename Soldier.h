#ifndef _SOLDIER_H_
#define _SOLDIER_H_

#include <iostream>

using namespace std;

class soldiers
{
public:
    string name;
    double damage;
    string special_ability;
    string Rank;

    soldiers (string n,double d,string R)
    {
        name=n;
        damage =d;
        Rank =R;
    }
    ~soldiers()
    {
        cout << "THE WAR IS OVER!!";
    }
  
    virtual void defend ()=0;
    virtual void report ()=0;
    virtual void kill ()=0;
    virtual void die ()=0;


};
class offensive : public soldiers
{
    void attack ()
    {
        cout << "ff";
    }
} ;
class defensive : public soldiers
{

} ;
class adaptable : public soldiers
{

} ;

#endif