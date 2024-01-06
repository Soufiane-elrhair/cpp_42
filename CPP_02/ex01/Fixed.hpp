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
