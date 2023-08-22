#include "Manager.h"

int main()
{
    Manager new_M;
    new_M.menu_add();
    cout << "________SPEARATOR________" << endl;
    new_M.show_army(1);

    while (true)
    {
        new_M.show_stats();
        new_M.interface();
    }
    

    return 0;
}