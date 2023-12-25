#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed&	operator=(const Fixed& other);
		void	setRawBits(int const rew);
		int		getRawBits(void) const;
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

#endif /* FIXED_HPP */
