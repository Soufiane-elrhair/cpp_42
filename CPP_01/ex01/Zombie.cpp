#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Constructor Parametrez is born" << std::endl;
}

Zombie::Zombie()
{
    this->_name = "empty";
    std::cout << "Constructor default is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " has died" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}