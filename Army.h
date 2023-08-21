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
    vector<soldiers> soldier_list;
    vector<vehicles> vehicle_list;

    Army(int id){
        this->id = id;
    }
    ~Army(){
        soldier_list.erase(soldier_list.begin(), soldier_list.end());
        vehicle_list.erase(vehicle_list.begin(), vehicle_list.end());
    }
    // Methods to add soldiers/vehicles
    void add_soldier(soldiers* new_soldier);

    void add_vehicle(vehicles* new_vehicle);

    // All soldiers attack
    void attack_all();

    // specific soldier attack
    void attack_name(string name);

    // All vehicles move
    void move_all();

    // Specific vehicle move
    void move_name(string name);

    // Report all
    void report_all();
};


#endif