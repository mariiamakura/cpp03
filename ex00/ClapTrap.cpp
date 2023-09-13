#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap is created" << std::endl;
    this->_name = name;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoints <= 0)
        std::cout << "ClapTrap doesn't have enough energy points to attack" << std::endl;
    else {
        std::cout << "ClapTrap attacks " << target << std::endl;
    }
}

