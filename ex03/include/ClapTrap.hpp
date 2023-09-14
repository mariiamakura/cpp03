#pragma once
# include <iostream>

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
        ClapTrap(const ClapTrap &other);

        virtual ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void printClapTrap();

    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};
