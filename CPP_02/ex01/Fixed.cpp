#include "Fixed.hpp"

/* Constructors */
Fixed::Fixed(): _fixedPointValue(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i): _fixedPointValue(i << _fractionalBits){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _fixedPointValue(roundf((f * (1 << _fractionalBits)))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    _fixedPointValue = other.getRawBits();
}

/* Destructor*/
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

/* Operatros */
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "copy assignment operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other) {
    // std::cout << "HIIIII\n";
    os << other.toFloat();
    return (os);
}

/* Memeber functions*/
void Fixed::setRawBits(int const rew){
    _fixedPointValue = rew;
}

int Fixed::getRawBits() const{
    return(_fixedPointValue);
}

int Fixed::toInt(void) const{
    return (_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat(void) const{
    return ((float)(_fixedPointValue) / (1 << _fractionalBits));
}
