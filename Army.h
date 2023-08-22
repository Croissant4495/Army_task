#ifndef _ARMY_H_
#define _ARMY_H_

#include "Soldier.h"
#include "Vehicles.h"
#include <vector>

using namespace std;

class Army
{
public:
    int id;
    int health;
    int shield;
    int damage;
    vector<soldiers*> soldier_list;
    vector<vehicles*> vehicle_list;

    Army(int id);
    ~Army();
    
    // Methods to add soldiers/vehicles
    void add_soldier(soldiers* new_soldier);

    void add_vehicle(vehicles* new_vehicle);

    // All soldiers and vehicles attack
    void attack_all();

    // specific soldier attack
    void attack_soldier_name(string name);
    
    // specific vehicle attack
    void attack_vehicle_name(string name);

    // All vehicles move
    void move_all();

    // Specific vehicle move
    void move_name(string name);

    // Report all
    void report_all();
};


#endif