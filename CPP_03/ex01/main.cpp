#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav1;
	ScavTrap scav2("foo");
	scav1 = scav2;

	scav1.attack("bar");
	scav1.guardGate();
	return 0;
} 
