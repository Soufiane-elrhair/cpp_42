/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:23:07 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
  : _type("Animal")
{
  std::cout << "[ Animal ] --> Default constractor called" << std::endl;
}

Animal::Animal(const Animal &other)
{ 
  std::cout << "[ Animal ] --> copy constractor called" << std::endl;
  *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
  std::cout << "[ Animal ] --> assignment operator called" << std::endl;
  _type = other._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "[ Animal ] --> Destructor called" << std::endl;
}

void  Animal::makeSound() const
{
  std::cout << "Animal has no sound" << std::endl;
}

// member functions

std::string Animal::getType() const
{
  return (_type);
}
