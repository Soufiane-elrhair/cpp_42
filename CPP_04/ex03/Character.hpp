#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
        int _count;
        AMateria *_save_inventory;
    public:
        Character();
        Character(Character const &other);
        Character(std::string const &name);
        Character &operator=(Character const &other);
        virtual ~Character();
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};





#endif /* CHARACTER_HPP */
