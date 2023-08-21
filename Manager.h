#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "Soldier.h"
#include "Army.h"
#include "Vehicles.h"

Army x(100);
class Manager
{
public:
    Army myArmy;
    Army enemyArmy;

    Manager() : myArmy(1) , enemyArmy(2){

    }

    soldiers* new_soldier(int option){
        soldiers* soldierPtr;
        string temp_name, temp_rank;
        double temp_dmg; 
        cout << "Enter Name: ";
        cin >> temp_name;
        cout << endl;
        switch (option){
            case 1:{ // offensive
                soldierPtr = new offensive(temp_name);
                break;
            }
            case 2:{ // defensive
                soldierPtr = new defensive(temp_name);
                break;
            }
            case 3:{ // adaptable
                soldierPtr = new adaptable(temp_name);
                break;
            }
        }
        return soldierPtr;
    }

    vehicles* new_vehicle(int option){
        vehicles* vehiclePtr;
        string temp_name, temp_rank;
        double temp_dmg; 
        cout << "Enter Name: ";
        cin >> temp_name;
        cout << endl;
        switch (option){
            case 1:{ // tank
                vehiclePtr = new tank(temp_name);
                break;
            }
            case 2:{ // helicopter
                vehiclePtr = new helicopter(temp_name);
                break;
            }
        }
        return vehiclePtr;
    }

    void menu_add(){

        int y,q,r,h,t,i;
        cout<<"To form your army,Enter the number of offensive soldiers you want:"<<endl;
        cin >> y;
        for(i=0; i<y; i++)
        {
            myArmy.add_soldier(new_soldier(1));
        }
        cout<<"Enter the number of defensive soldiers:"<<endl;
        cin >> q;
        for(i=0; i<q; i++)
        {
            myArmy.add_soldier(new_soldier(2));
        }
        cout<<"Enter the number of adaptable soldiers:"<<endl;
        cin >> r;
        for(i=0; i<r; i++)
        {
            myArmy.add_soldier(new_soldier(3));
        }
        cout<<"Enter the number of helicopters:"<<endl;
        cin >> h;
        for(i=0; i<h; i++)
        {
            myArmy.add_vehicle(new_vehicle(1));
        }
        cout<<"Enter the number of tanks:"<<endl;
        cin >> t;
        for(i=0; i<t; i++)
        {
            myArmy.add_vehicle(new_vehicle(2));
        }


    }


};

#endif
/*
void MENU()
{
    int y,z;
    int x,i;
    string sname;
    string vname;
    cout<<"To form your army,please choose the number of soldiers you want:"<<endl;
    cin<<y;
    for(i=0; i<y; i++)
        Army::add_soldier(soldiers* new_soldier);
    cout<<"choose the number of vehicles you want:"<<endl;
    cin<<z;
    for(i=0; i<z; i++)
        Army:: add_vehicle(vehicles* new_vehicle);
    cout<<"choose number from 1 to 7 to choose what you want to do with your army"<< endl;
    while(x>7||x<1)
    {
        cout<<"please enter a number from 1 to 7"<< endl;
    }
    cout<<"1.attack all"<<endl;
    cout<<"2.attack soldier name"<<endl;
    cout<<"3.attack vehicle name"<<endl;
    cout<<"4.move all the army"<<endl;
    cout<<"5.move name"<<endl;
    cout<<"6.report all the army"<<endl;
    cout<<"7.EXIT"<<endl;
    cin<<x;

    switch(x)
    {
    case 1:
        Army:: attack_all();
        break;
    case 2:
    {
        cout<<"Enter the soldier's name:"<<endl;
        cin<< sname;
        Army:: attack_soldier_name(sname);
         break;
    }
   
    case 3:
    {
        cout<<"Enter the vehicle's name:"<<endl;
        cin<< vname;
        Army:: attack_vehicle_name( vname);

        break;
    }
   
    case 4:
        Army:: move_all();
        break;
    case 5:
        Army:: move_name(string name);
        break;
    case 6:
        Army:: report_all();
        break;
    case 7:
    {
        cout<<"Are you sure you want to exit?"<<endl;
        cin>>z;
        if(z)
            exit(0);
        else
            MENU();
    }
   
    }
}
*/