#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
  std::cout << "--------------Main tst-----------------------" << std::endl;
  {
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // will output the cat sound!
    dog->makeSound();
    meta->makeSound();
    
    delete meta;
    delete cat;
    delete dog;
  }

  std::cout << "--------------Wrong Classes-----------------------" << std::endl;
  {
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *cat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // will output the cat sound!
    meta->makeSound();

    delete meta;
    delete cat;
  }
  return 0;
}
