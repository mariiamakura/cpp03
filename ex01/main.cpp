#include "ScavTrap.hpp"

int main() {
    ClapTrap one("TEST");
    ScavTrap test("Mariia");
    ScavTrap test0(test);
    ScavTrap test3;

    test3 = test;

    //test3.guardGate();
    test3.printScavTrap();
    one.printClapTrap();
    test3.attack("Bob");
}

