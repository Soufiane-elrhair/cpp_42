/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:56:45 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors */

Character::Character()
    : _name("default"), _count(0), _save_inventory(NULL)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &other)
    : _name(other._name), _count(other._count), _save_inventory(NULL)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i];
}

Character::Character(std::string const &name)
    : _name(name), _count(0), _save_inventory(NULL)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

/* Destructor */

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    if (_save_inventory)
        delete _save_inventory;
}

/* Operators */

Character &Character::operator=(Character const &other)
{
    this->_name = other._name;
    this->_count = other._count;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = other._inventory[i]->clone();
    return (*this);
}

/* Member Functions */

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (this->_count < 4)
    {

        for (int i = 0; i < 4; i++)
        {
            if (!this->_inventory[i])
            {
                this->_inventory[i] = m;
                this->_count++;
                return;
            }
        }
    }
    else
    {
        std::cout << "Inventory at maximum capacity; risk of material loss." << std::endl;
        if (_save_inventory)
            delete _save_inventory;
        _save_inventory= m;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        if (_save_inventory)
        {
          delete _save_inventory;
          _save_inventory = NULL;
        }
        if (!_save_inventory)
          _save_inventory = this->_inventory[idx];
        this->_inventory[idx] = NULL;
        this->_count--;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
    else 
        std::cout << "The inventory is empty" << std::endl;
}
