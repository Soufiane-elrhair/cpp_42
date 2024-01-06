#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie_he = newZombie("one");
    zombie_he->announce();
    randomChump("two");
    delete zombie_he;

    return (0);
}