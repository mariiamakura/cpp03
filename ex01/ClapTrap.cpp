#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "(default) ClapTrap is created" << std::endl;
    this->_name = "default";
    this->_attackDamage = 0;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_attackDamage = 0;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap copy assigment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << "  is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy/hit points to attack" << std::endl;
    else {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target
            << ". " << this->_energyPoints << " energy points is left" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy/hit points to repair" << std::endl;
   else {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " got " << amount << " of hit points back"
        << ". Total " << this->_hitPoints << " hit points" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0 && this->_hitPoints >= amount) {
        this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " got " << amount << " points of damage. " <<
            this->_hitPoints << " hit points left" << std::endl;
    }
    else {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << "  doesn't have enough hit/energy points to take all the damage" << std::endl;
    }
}