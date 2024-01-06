#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
protected:
	std::string _name;
	int	_hit_points;
	int _energy_points;
	int _attack_damage;
};

#endif /* CLAPTRAP_HPP */

