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
