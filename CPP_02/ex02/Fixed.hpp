#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed{
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		
		Fixed&	operator=(const Fixed& other);
		
		bool	operator<(const Fixed& other) const;
		bool	operator>(const Fixed& other) const;
		
		bool	operator<=(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		
		Fixed&	operator++(void); // pre-increment
		Fixed&	operator--(void); // pre-decncrement
		Fixed	operator++(int); // pos-increment 
		Fixed	operator--(int); // pos-dencrement
		
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(const Fixed& a, const Fixed& b);
		
		void	setRawBits(int const rew);
		int		getRawBits(void) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif /*FIXED_HPP*/

