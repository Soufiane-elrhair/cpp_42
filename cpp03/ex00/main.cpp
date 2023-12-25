#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clap");

  clap.takeDamage(9);
  clap.attack("foo");
  clap.beRepaired(9);
  clap.takeDamage(10);
  clap.attack("foo");

  return(0);
}

