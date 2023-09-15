#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_name = "default";
    this->_attackDamage = 20;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_guardMode = false;
    std::cout << "::ScavTrap:: (default) is created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_name = name;
    this->_attackDamage = 20;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_guardMode = false;
    std::cout << "::ScavTrap:: " << name << "  is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << "::ScavTrap:: copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "::ScavTrap:: destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other)
    {
       ClapTrap::operator=(other);
       this->_guardMode = other._guardMode;
    }
    std::cout << "::ScavTrap:: copy assigment operator called" << std::endl;
    return (*this);
}

void ScavTrap::printScavTrap() {
    std::cout << "---ScavTrap------"<<std::endl;
    std::cout << "::ScavTrap:: hit points " << this->_hitPoints << std::endl;
    std::cout << "::ScavTrap::  energy points " << this->_energyPoints << std::endl;
    std::cout << "::ScavTrap::  attack damage " << this->_attackDamage << std::endl;
    std::cout << "::ScavTrap::  guard mode " << this->_guardMode << std::endl;
}

void ScavTrap::guardGate() {
    this->_guardMode = true;
    std::cout << "::ScavTrap:: " << this->_name << " is in Guard Mode now " << this->_guardMode << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        std::cout << "::ScavTrap:: " << this->_name << " doesn't have enough energy/hit points to attack" << std::endl;
    else if (this->_guardMode)
        std::cout << "::ScavTrap:: " << this->_name << " in Guard Mode, it doesn't get any damage" << std::endl;
    else {
        this->_energyPoints--;
        std::cout << "::ScavTrap:: " << this->_name << " attacks " << target
                  << ". " << this->_energyPoints << " energy points is left" << std::endl;
    }
}