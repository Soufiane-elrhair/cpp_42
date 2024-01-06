#ifndef AMIMAL_HPP
# define AMIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal &operator=(const AAnimal& other);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;

protected:
	std::string	_type;
};

#endif /* AMIMAL_HPP */
