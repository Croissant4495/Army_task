#include "Manager.h"

int main()
{
    Manager game;
    game.menu_add();
    cout << "________SPEARATOR________" << endl;
    game.show_army(1);
    cout << "________SPEARATOR________" << endl;
    game.generate_enemy();
    game.show_army(2);
    cout << "________SPEARATOR________" << endl;
    cout << endl;

    while (true)
    {
        game.show_stats();
        game.interface();
        game.move_enemy();
    }
    

    return 0;
}