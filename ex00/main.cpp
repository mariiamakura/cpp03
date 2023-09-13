#include "ClapTrap.hpp"

int main() {
    ClapTrap test0("Mariia");
    ClapTrap test2(test0);
    ClapTrap test;

    test = test2;

    test.takeDamage(1);
    test.takeDamage(10);
    test.attack("B");
    test.attack("B");
    test.attack("B");
    test.attack("B");
    test.beRepaired(1);
    test.takeDamage(3);
}

