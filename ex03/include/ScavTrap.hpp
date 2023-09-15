#pragma once
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

        ScavTrap(const ScavTrap &other);

        ScavTrap &operator=(const ScavTrap &other);

        void guardGate();
        void printScavTrap();
        void attack(const std::string &target);
    private:
        bool _guardMode;
};
