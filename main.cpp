#include "Manager.h"

int main()
{
    // Army x(100);
    // offensive o("Max", 10, "rookie");
    // defensive d("Ben", 5, "rookie");
    // adaptable a("Jack", 8, "rookie");
    // x.add_soldier(&o);
    // x.add_soldier(&a);
    // x.add_soldier(&d);

    // tank t("russian", "artillery");
    // helicopter h("germany", "machine gun");
    // x.add_vehicle(&t);
    // x.add_vehicle(&h);

    // x.report_all();
    Manager new_M;
    new_M.menu_add();
    cout << "________SPEARATOR________" << endl;
    new_M.show_army(1);
    
    return 0;
}