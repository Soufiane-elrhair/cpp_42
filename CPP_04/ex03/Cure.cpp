#include "Cure.hpp"
#include "ICharacter.hpp"

/* Constructors */

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &other) : AMateria(other)
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

/* Destructor */

Cure::~Cure()
{
}

/* Operators */

Cure &Cure::operator=(Cure const &other)
{
    this->_type = other._type;
    return (*this);
}

/* Member Functions */

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}