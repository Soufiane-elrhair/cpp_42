#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &other);
        Ice(std::string const &type);
        Ice &operator=(Ice const &other);
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* ICE_HPP*/
