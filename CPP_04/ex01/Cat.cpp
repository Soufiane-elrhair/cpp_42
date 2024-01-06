#include "Cat.hpp"

Cat::Cat()
{
  _type = "Cat";
  _sound = "meow meow meow";
  _brain = new Brain();
  std::cout << "[ Cat ] --> Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
  : Animal()
{
  std::cout << "[ Cat ] --> copy constructor called" << std::endl;
  _type = other._type;
  _brain = new Brain();
  for (int i = 0; i < 100; i++)
    _brain->setIdea(i, other._brain->getIdea(i));
}

Cat& Cat::operator=(const Cat& other)
{
  std::cout << "[ Cat ] --> assignment operator called" << std::endl;
  _type = other._type;
  delete _brain;
  _brain = new Brain();
  for (int i = 0; i < 100; i++)
    _brain->setIdea(i, other._brain->getIdea(i));
  return (*this);
}

Cat::~Cat()
{
  std::cout << "[ Cat ] --> destructor called" << std::endl;
  delete _brain;
}

void Cat::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
