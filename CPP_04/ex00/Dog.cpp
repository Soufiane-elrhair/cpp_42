#include "Dog.hpp"


Dog::Dog()
{
  _type = "Dog";
  _sound = " Woof ruf ruf ruf";
  std::cout << "[ Dog ] --> Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
  : Animal(other)
{
  std::cout << "[ Dog ] --> copy constructor called" << std::endl;
  *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
  std::cout << "[ Dog ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "[ Dog ] --> destructor called" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
