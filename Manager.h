#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "Soldier.h"
#include "Army.h"
#include "Vehicles.h"

class Manager
{
public:
    Army myArmy;
    Army enemyArmy; 

    Manager() : myArmy(1) , enemyArmy(2){

    }

    soldiers* new_soldier(int option);
    vehicles* new_vehicle(int option);
    void menu_add();
    void show_army(int id);
    void attack_army(int id);
    void defend_army(int id);
    void show_stats();
    void interface();
    void army_dead(int id);

};

#endif