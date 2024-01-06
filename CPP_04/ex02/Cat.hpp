#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();
	void makeSound() const;

private:
	std::string _sound;
	Brain		*_brain;
};

#endif /* CAT_HPP */
