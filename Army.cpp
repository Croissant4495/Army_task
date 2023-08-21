#include "Army.h"

void Army::add_soldier(soldiers* new_soldier){
    soldier_list.push_back(*new_soldier);
}

void Army:: add_vehicle(vehicles* new_vehicle){
        vehicle_list.push_back(*new_vehicle);
}

void Army:: attack_all(){
    for (int i = 0; i < soldier_list.size(); i++){
            soldier_list[i].attack();
        }

    for (int i = 0; i < vehicle_list.size(); i++){
            vehicle_list[i].fire();
        }
}

void Army:: attack_soldier_name(string name){
    for (int i = 0; i < soldier_list.size(); i++){
            if (soldier_list[i].name == name){
                soldier_list[i].attack();
            }
        }
}

void Army:: attack_vehicle_name(string name){
    for (int i = 0; i < vehicle_list.size(); i++){
            if (vehicle_list[i].name == name){
                vehicle_list[i].fire();
            }
        }
}

void Army:: move_all(){
    for (int i = 0; i < vehicle_list.size(); i++){
            vehicle_list[i].Move();
        }
}

void Army:: move_name(string name){
    for (int i = 0; i < vehicle_list.size(); i++){
            if (vehicle_list[i].name == name){
                vehicle_list[i].Move();
            }
        }
}

void Army:: report_all(){
    cout << "Soldiers reporting:" << endl;
    for (int i = 0; i < soldier_list.size(); i++){
            soldier_list[i].report();
        }
    
    cout << endl << "Vehicles reporting:" << endl;
    for (int i = 0; i < vehicle_list.size(); i++){
            vehicle_list[i].report();
        }
}