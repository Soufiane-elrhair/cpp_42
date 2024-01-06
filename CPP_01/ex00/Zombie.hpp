#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};
// Creates new Zombie stored on the heap, which announces itself
Zombie	*newZombie(std::string name);

// Creates new Zombie stored on the stack, which announces itself
void	randomChump(std::string name);
#endif