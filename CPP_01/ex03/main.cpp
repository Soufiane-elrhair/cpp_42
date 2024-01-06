#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main ()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}
/*In this case, it would be best to use a pointer to 
    Weapon in the HumanB class.
    This is because HumanB may not  always have a Weapon, so we need 
    to be able to check if the pointer is nullptr before we dereference it.
    
    If we used  a reference to Weapon, we would not be able to do this, and 
    we would run the risk of accessing a Weapon that does not exist.

We can use a reference to Weapon in the HumanA class because we
 know that HumanA will always have a Weapon. This means that we can 
 safely dereference the reference without having to check if it is nullptr first.

*/