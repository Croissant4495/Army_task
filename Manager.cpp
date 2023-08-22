#include "Manager.h"

string soldier_names[7] = {"Ahmed", "Mohamed", "Hassan", "Hussein", "Maged", "Nour", "Yusuf"};
string vehicle_names[4] = {"Spinner", "Demolisher", "Panzer", "Fighter Jet"};

soldiers* Manager :: new_soldier(int option, int id = 1){
        soldiers* soldierPtr;
        string temp_name, temp_rank;
        double temp_dmg;
        if (id == 1){
            cout << "Enter Name: ";
            cin >> temp_name;
            cout << endl;
        }else{
            temp_name = soldier_names[rand() % 7];
        }
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

vehicles* Manager :: new_vehicle(int option, int id = 1){
        vehicles* vehiclePtr;
        string temp_name, temp_rank;
        double temp_dmg; 
        if (id == 1){
            cout << "Enter Name: ";
            cin >> temp_name;
            cout << endl;
        }else{
            temp_name = vehicle_names[rand() % 4];
        }
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
 // 0 add condition

void Manager :: menu_add(){
        int i, temp;
        int soldier_count = 0, vehicle_count = 0;
        cout << "To form your army, Enter 7 soldiers and 3 vehicles" << endl;
        
        // Offensive
        // Validate input 
        do {
            cout<<"Enter the number of offensive soldiers you want:"<<endl;
            cin >> temp;
        }while((temp + soldier_count) > 7 || temp < 0);

        for(i=0; i<temp; i++)
        {
            myArmy.add_soldier(new_soldier(1));
            soldier_count++;
            myArmy.health += 10;
            myArmy.damage += 15;
        }

        if (soldier_count < 7){
            // Defensive
            // Validate input 
            do {
                cout<<"Enter the number of defensive soldiers:"<<endl;
                cin >> temp;
            }while((temp + soldier_count) > 7 || temp < 0);

            for(i=0; i<temp; i++)
            {
                myArmy.add_soldier(new_soldier(2));
                soldier_count++;
                myArmy.health += 20;
                myArmy.damage += 5;
            }
        }

        if (soldier_count < 7){
            // Adaptable
            // Validate input 
            do {
                cout<<"Enter the number of adaptable soldiers:"<<endl;
                cin >> temp;
            }while((temp + soldier_count) > 7 || temp < 0);

            for(i=0; i<temp; i++)
            {
                myArmy.add_soldier(new_soldier(3));
                soldier_count++;
                myArmy.health += 15;
                myArmy.damage += 10;
            }
        }

        // Tank
        // Validate
        do {
            cout<<"Enter the number of helicopters:"<<endl;
            cin >> temp;
        }while((temp + vehicle_count) > 3 || temp < 0);
    
        for(i=0; i<temp; i++)
        {
            myArmy.add_vehicle(new_vehicle(1));
            vehicle_count++;
            myArmy.health += 35;
        }
        
        if (vehicle_count < 3){
            // Helicopter
            // Validate
            do {       
                cout<<"Enter the number of tanks:"<<endl;
                cin >> temp;
            }while((temp + vehicle_count) > 3 || temp < 0);

            for(i=0; i<temp; i++)
            {
                myArmy.add_vehicle(new_vehicle(2));
                vehicle_count++;
                myArmy.health += 25;
            }
        }
        if (soldier_count){
            myArmy.damage = myArmy.damage / soldier_count;
        }
   }

void Manager :: show_army(int id){
    if (id == 1){
        cout << "Your Army:" << endl;
        myArmy.report_all();
    }else{
        cout << "Enemy Army:" << endl;
        enemyArmy.report_all();
    }
}

void Manager :: attack_army(int id){
    // Define attacking and damaged army
    Army* attack_army;
    Army* damaged_army;

    if (id == 1){
        attack_army = &myArmy;
        damaged_army = &enemyArmy;
    }else{

        attack_army = &enemyArmy;
        damaged_army = &myArmy;
    }

    // Shield negates damage
    if(damaged_army->shield > 0){
        damaged_army->shield -= attack_army->damage;
        // Shield never negative
        if (damaged_army->shield < 0){
            damaged_army->shield = 0;
        }
    }else{
        // No shield
        damaged_army->health -= attack_army->damage;
    }

    // Army is dead
    if (damaged_army->health <= 0){
        if(id == 1){
            army_dead(2);
        }else{
            army_dead(1);
        }
    }

}

void Manager :: defend_army(int id){
    // Increase shield of corresponding army
    if(id == 1){
        myArmy.shield += 7;
    }else{
        enemyArmy.shield += 7;
    }
}

void Manager :: show_stats(){
    cout << endl << "Your army:" << endl;
    cout << "Health: " << myArmy.health << ", Shield: " << myArmy.shield << ", Damage: " << myArmy.damage << endl;

    cout << "______________" << endl;

    cout << "Enemy army:" << endl;
    cout << "Health: " << enemyArmy.health << ", Shield: " << enemyArmy.shield << ", Damage: " << enemyArmy.damage << endl;

    cout << "______________" << endl;
}

void Manager :: interface(){
    int choice = 0;
    cout << "1)Attack" << endl;
    cout << "2)Defend" << endl;
    cout << "3)Surrender" << endl;

    do{
        cout << "Choose an option: ";
        cin >> choice;
    }while(choice > 3 || choice < 1);
    switch (choice)
    {
    case 1:
        attack_army(1);
        break;
    case 2:
        defend_army(1);
        break;
    case 3:
        army_dead(1);
        break;
    }
}

void Manager :: army_dead(int id){
    if (id == 1){
        cout << endl << "You died -_-" << endl << "Game Over";
        exit(0);
    }else{
        cout << endl << "3ashhhh :-)" << endl << "You won";
        exit(0);
    }
}

void Manager :: generate_enemy(){
    // Generate random numbers from 0 to remaining soldiers
    int remaining = 7;
    int soldier_count = 0;
    int num = rand() % remaining;
    
    // offensive
    remaining -= num;
    for (int i = 0; i < num; i++){
        enemyArmy.add_soldier(new_soldier(1, 2));
        enemyArmy.health += 10;
        enemyArmy.damage += 15;
        soldier_count++;
    }

    // defensive
    num = rand() % remaining;
    remaining -= num;
    for (int i = 0; i < num; i++){
        enemyArmy.add_soldier(new_soldier(2, 2));
        enemyArmy.health += 20;
        enemyArmy.damage += 5;
        soldier_count++;
    }

    // adaptable
    num = rand() % remaining;
    remaining -= num;
    for (int i = 0; i < num; i++){
        enemyArmy.add_soldier(new_soldier(3, 2));
        enemyArmy.health += 15;
        enemyArmy.damage += 10;
        soldier_count++;
    }

    // Tank
    remaining = 3;
    num = rand() % remaining;
    remaining -= num;
    for (int i = 0; i < num; i++){
        enemyArmy.add_vehicle(new_vehicle(1, 2));
        enemyArmy.health += 35;
    }
    
    // Helicopter
    num = rand() % remaining;
    remaining -= num;
    for (int i = 0; i < num; i++){
        enemyArmy.add_vehicle(new_vehicle(2, 2));
        enemyArmy.health += 25;
    }

    enemyArmy.damage = enemyArmy.damage / soldier_count;
}

void Manager :: move_enemy(){
    int choice = rand() % 2;
    
    if (choice == 0){
        attack_army(2);
    }else{
        defend_army(2);
    }
}