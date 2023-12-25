/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:03:28 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructors */

MateriaSource::MateriaSource() : _index(0)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other) : _index(other._index)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = other._materia[i];
}

/* Destructor */

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
    }
}

/* Operators */

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    this->_index = other._index;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = other._materia[i]->clone();
    return (*this);
}

/* Member Functions */

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_index < 4)
    {
        this->_materia[this->_index] = m;
        this->_index++;
        
    }
    else
    {
        std::cout << "MateriaSource is full" << std::endl;
        delete m;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (NULL);
}
