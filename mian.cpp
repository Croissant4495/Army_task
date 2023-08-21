#include "Soldier.h"
#include "Army.h"
#include "Vehicles.h"

int main()
{
    Army x(100);
    offensive o("Max", 10, "rookie");
    defensive d("Ben", 5, "rookie");
    adaptable a("Jack", 8, "rookie");
    x.add_soldier(&o);
    x.add_soldier(&a);
    x.add_soldier(&d);
    x.report_all();
    return 0;
}