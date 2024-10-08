#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Unknown"),
	  _hit_points(10),
	  _energy_points(10),
	  _attack_damage(0)
{
	std::cout << "[ CalpTrap ] --> Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	  _hit_points(10),
	  _energy_points(10),
	  _attack_damage(0)
{
	std::cout << "[ CalpTrap ] --> parametrize constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: _name(other._name),
	_hit_points(other._hit_points),
	_energy_points(other._energy_points),
	_attack_damage(other._attack_damage)
{
	std::cout << "[ CalpTrap ] --> copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ CalpTrap ] --> destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "[ CalpTrap ] --> assignment operator called" << std::endl;
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
					<< " causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
		_hit_points -= _attack_damage;
	}
	else
		std::cout << _name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy_points && _hit_points && (unsigned)_hit_points > amount)
	{
			_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " take " << amount << " damages." << std::endl;
	}
	else
	{
		std::cout << _name << " is dead" << std::endl;
		_hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points && _hit_points)
	{
		std::cout << "ClapTrap " << _name << " is repaired of " << amount << " points." << std::endl;
		if (_hit_points + amount < 10)
			_hit_points += amount;
		else
			_hit_points = 10;
		_energy_points--;
	}
	else
		std::cout << _name << " is dead" << std::endl;
}
