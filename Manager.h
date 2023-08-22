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

    soldiers* new_soldier(int option, int id);
    vehicles* new_vehicle(int option, int id);
   
    void menu_add();
    void show_stats();
    void interface();

    void show_army(int id);
    void attack_army(int id);
    void defend_army(int id);
    void army_dead(int id);
    
    void generate_enemy();
    void move_enemy();

};

#endif