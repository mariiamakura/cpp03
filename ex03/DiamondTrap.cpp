#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &other);

    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void attack(std::string &target);
    void whoAmI();
private:
    std::string _name;
};

#endif