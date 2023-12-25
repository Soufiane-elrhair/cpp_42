#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();

    return (*this);
}

void Fixed::setRawBits(int const rew){
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = rew;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return(_fixedPointValue);
}
