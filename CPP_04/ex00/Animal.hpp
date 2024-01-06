#ifndef AMIMAL_HPP
# define AMIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal& other);
	Animal &operator=(const Animal& other);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string	_type;
};

#endif /* AMIMAL_HPP */
