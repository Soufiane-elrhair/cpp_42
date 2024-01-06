#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has died" << std::endl;
}



void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

