#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];
        int _index;
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);
        virtual ~MateriaSource();
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
};




#endif /* MATERIASOURCE_H */