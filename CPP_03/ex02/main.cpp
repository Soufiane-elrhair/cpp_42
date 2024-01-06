#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag;
	FragTrap frag1(frag);
	FragTrap frag2 = frag1;
	frag2.attack("frag1");
	frag1.takeDamage(20);
	frag1.beRepaired(10);
	frag1.highFivesGuys();
	return (0);
}
