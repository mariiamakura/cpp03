#include "FragTrap.hpp"

int main() {
    ClapTrap one("TEST");
    FragTrap test("Mariia");
    FragTrap test1(test);
    FragTrap test2;

    test2 = test1;

    test.takeDamage(13);
    test.attack("Bob");
    one.printClapTrap();
    test.printFragTrap();
    test.highFivesGuys();
}

