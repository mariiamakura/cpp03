#include "include/FragTrap.hpp"

FragTrap::FragTrap() :  ClapTrap("default", 100, 100, 30) {
    std::cout << ">>FragTrap<< (default) constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name, 100, 100, 30) {
    std::cout << ">>FragTrap<<" << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << ">>FragTrap<< copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << ">>FragTrap<< destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << ">>FragTrap<< copy assigment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys() {
    std::cout << ">>FragTrap<< give me high five!" << std::endl;
}

void FragTrap::printFragTrap()  {
    std::cout << "---FragTrap------"<<std::endl;
    std::cout << ">>FragTrap<< name " << this->_name << std::endl;
    std::cout << ">>FragTrap<< hit points " << this->_hitPoints << std::endl;
    std::cout << ">>FragTrap<< energy points " << this->_energyPoints << std::endl;
    std::cout << ">>FragTrap<< attack damage " << this->_attackDamage << std::endl;
}

//void FragTrap::attack(const std::string &target) {
//    if (this->_energyPoints <= 0)
//        std::cout << ">>FragTrap<< " << this->_name << " doesn't have enough energy points to attack" << std::endl;
//    else {
//        this->_energyPoints--;
//        std::cout << ">>FragTrap<<" << this->_name << " attacks " << target
//                  << ". " << this->_energyPoints << " energy points is left" << std::endl;
//    }
//}