#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);

    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void attack(const std::string &target);
    void whoAmI(void);
    void  printDiamond(void);
private:
    std::string _name;
};