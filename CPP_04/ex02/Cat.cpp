#include "Cat.hpp"

Cat::Cat()
{
  _type = "Cat";
  _sound = "meows meows meows";
  _brain = new Brain();
  std::cout << "[ Cat ] --> Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
  : AAnimal()
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
  delete _brain;
  _type = other._type;
  _brain = new Brain();
  for (int i = 0; i < 100; i++)
    _brain->setIdea(i, other._brain->getIdea(i));
  return (*this);
}

Cat::~Cat()
{
  delete _brain;
  std::cout << "[ Cat ] --> destructor called" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << _type << " make " << _sound << " sound" << std::endl;
}
