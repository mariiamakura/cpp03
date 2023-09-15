#include "include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->_name = "default";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "**DiamondTrap** (default) constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "**DiamondTrap** " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    *this = other; //doesnt work
//    this->_name = other._name;
//    this->_hitPoints = other._hitPoints;
//    this->_energyPoints = other._energyPoints;
//    this->_attackDamage = other._attackDamage;
    std::cout << "**DiamondTrap** copy constructor called" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "**DiamondTrap** destructor called" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}


void DiamondTrap::printDiamond() {
    std::cout << "---DiamondTrap------"<<std::endl;
    std::cout << "**DiamondTrap** name " << this->_name << std::endl;
    std::cout << "**DiamondTrap** hit points " << this->_hitPoints << std::endl;
    std::cout << "**DiamondTrap** energy points " << this->_energyPoints << std::endl;
    std::cout << "**DiamondTrap** attack damage " << this->_attackDamage << std::endl;
}