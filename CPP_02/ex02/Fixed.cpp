#include "Fixed.hpp"

/* Constructors */
Fixed::Fixed(): _fixedPointValue(0){}

Fixed::Fixed(const int i): _fixedPointValue(i * (1 << _fractionalBits)){}

Fixed::Fixed(const float f): _fixedPointValue(roundf((f * (1 << _fractionalBits)))){}

Fixed::Fixed(const Fixed &other){
    _fixedPointValue = other.getRawBits();
}

/* Destructor*/
Fixed::~Fixed(){}

/* Operatros */
Fixed& Fixed::operator=(const Fixed& other) {
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed & other) const{
	if (this->_fixedPointValue < other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed & other) const{
	if (this->_fixedPointValue > other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed & other) const{
	if (this->_fixedPointValue >= other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & other) const{
	if (this->_fixedPointValue <= other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & other) const{
	if (this->_fixedPointValue == other._fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed & other) const{
	if (this->_fixedPointValue != other._fixedPointValue)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& other)const{
	return((this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const{
	return(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const{
	return((float)(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const{
	return((float)(this->toFloat() / other.toFloat()));
}

	/* pos-increment*/
Fixed Fixed::operator++(int nbr){
	Fixed tmp =  *this;
	if (!nbr)
		this->_fixedPointValue++;
	else
		this->_fixedPointValue += nbr;
	return (tmp);
}
	/* pos-decrement*/
Fixed Fixed::operator--(int nbr){
	Fixed tmp = *this;
	if(!nbr)
		this->_fixedPointValue--;
	else
		this->_fixedPointValue -= nbr;
	return (tmp);
}

	/* pre-decrement*/
Fixed& Fixed::operator--(void){
	this->_fixedPointValue--;
	return (*this);
}
	/* pre-increment*/
Fixed& Fixed::operator++(void){
	this->_fixedPointValue++;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other) {
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

Fixed& Fixed::min(Fixed& a, Fixed& b){
	if (a._fixedPointValue < b._fixedPointValue)
		return (a);
	return (b);
}

Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	if (a._fixedPointValue < b._fixedPointValue)
		return ((Fixed&)a);
	return ((Fixed&)b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	if (a._fixedPointValue > b._fixedPointValue)
		return (a);
	return (b);
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	if (a._fixedPointValue > b._fixedPointValue)
		return ((Fixed&)a);
	return ((Fixed&)b);
}
