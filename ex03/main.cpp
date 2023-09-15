#include "include/DiamondTrap.hpp"

int main() {
    //FragTrap test_frog;
    DiamondTrap mariia("Mariia");
    DiamondTrap test(mariia);

    //test = mariia;

    test.takeDamage(7);
    test.beRepaired(3);
    test.attack("Bob");
    //test.printDiamond();
    test.whoAmI();
    test.highFivesGuys();
    //mariia.printClapTrap();

}

