/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:50:56 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructors */

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &other) : AMateria(other)
{
}

Ice::Ice(std::string const &type) : AMateria(type)
{
}

/* Destructor */

Ice::~Ice()
{
}

/* Operators */

Ice &Ice::operator=(Ice const &other)
{
    this->_type = other._type;
    return (*this);
}

/* Member Functions */

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}