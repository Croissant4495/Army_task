#ifndef _VEHICLES_H_
#define _VEHICLES_H_

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

} ;
class helicopter : public vehicles
{

} ;


#endif