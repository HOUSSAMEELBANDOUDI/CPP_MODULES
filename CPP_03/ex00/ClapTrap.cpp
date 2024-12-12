/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:32:35 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/03 16:24:00 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : _name(name), 
      _hitPoints(defaultHitPoints), 
      _energyPoints(defaultEnergyPoints), 
      _attackDamage(defaultAttackDamage) {
    std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
    std::cout << "ClapTrap " << _name << " copied!" << std::endl;
}


ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " destructed!" << std::endl;
}


ClapTrap &ClapTrap::operator=(ClapTrap const & src) {
    if (this != &src) {
        _name = src.getName();
        _hitPoints = src.getHitPoints();
        _energyPoints = src.getEnergyPoints();
        _attackDamage = src.getAttackDamage();
    }
    return *this;
}


std::string ClapTrap::getName(void) const {
    return _name;
}

unsigned int ClapTrap::getHitPoints(void) const {
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const {
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const {
    return _attackDamage;
}


void ClapTrap::attack(std::string & target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " cannot attack because it has no hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " cannot attack because it has no energy points!" << std::endl;
    }
}


void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
    } else {
        if (amount >= _hitPoints) {
            _hitPoints = 0;
            std::cout << "ClapTrap " << _name << " takes " << amount << " damage and is destroyed!" << std::endl;
        } else {
            _hitPoints -= amount;
            std::cout << "ClapTrap " << _name << " takes " << amount << " damage! Remaining hit points: "
                      << _hitPoints << std::endl;
        }
    }
}


void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " cannot be repaired because it is destroyed!" << std::endl;
    } else if (_energyPoints == 0) {
        std::cout << "ClapTrap " << _name << " cannot be repaired because it has no energy points!" << std::endl;
    } else {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount 
                  << " hit points! Remaining hit points: " << _hitPoints
                  << ", remaining energy points: " << _energyPoints << std::endl;
    }
}
