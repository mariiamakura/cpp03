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
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "::ScavTrap:: copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "::ScavTrap:: destructor called" << std::endl;
}