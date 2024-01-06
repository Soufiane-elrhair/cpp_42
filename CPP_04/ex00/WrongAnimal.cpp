#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
  : _type("WrongAnimal")
{
  std::cout << "[ WrongAnimal ] --> Default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{ 
  std::cout << "[ WrongAnimal ] --> copy constractor called" << std::endl;
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
  std::cout << "[ WrongAnimal ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "[ WrongAnimal ] --> Destructor called" << std::endl;
}

void  WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal has no sound" << std::endl;
}

// member functions

std::string WrongAnimal::getType() const
{
  return (_type);
}