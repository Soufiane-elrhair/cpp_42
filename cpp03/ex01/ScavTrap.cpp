/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:28:24 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdio>

ScavTrap::ScavTrap()
{
	std::cout << "[ ScavTrap ] --> Default constructor called" << std::endl;
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "[ ScavTrap ] --> Parametrize constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap()
{
	std::cout << "[ ScavTrap ] --> Copy constructor called" << std::endl;
	*this = other;
}
 
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "[ ScavTrap ] --> Assignement operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ ScavTrap ] --> Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy_points && _hit_points)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
		std::cout << _name << " is daed" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
