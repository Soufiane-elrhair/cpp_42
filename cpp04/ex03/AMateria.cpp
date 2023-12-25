/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:37:58 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria()
    : _type("default")
{}

AMateria::AMateria(std::string const &type)
    : _type(type)
{}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria::~AMateria()
{
}

/* Operator overloads */
AMateria &AMateria::operator=(AMateria const &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

/* Methods */
void AMateria::use(ICharacter &target)
{
    (void)target;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}
