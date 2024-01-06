#include "AAnimal.hpp"

AAnimal::AAnimal()
  : _type("AAnimal")
{
  std::cout << "[ AAnimal ] --> Default constractor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{ 
  std::cout << "[ AAnimal ] --> copy constractor called" << std::endl;
  *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
  std::cout << "[ AAnimal ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

AAnimal::~AAnimal()
{
  std::cout << "[ AAnimal ] --> Destructor called" << std::endl;
}
