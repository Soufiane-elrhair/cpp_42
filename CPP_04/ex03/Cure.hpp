#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &other);
        Cure(std::string const &type);
        Cure &operator=(Cure const &other);
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* CURE_H */
