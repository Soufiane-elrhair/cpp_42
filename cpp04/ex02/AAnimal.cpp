/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:29:51 by selrhair          #+#    #+#             */
/*   Updated: 2023/07/27 12:31:33 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
