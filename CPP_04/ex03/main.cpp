#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    std::cout << "------------------main tst---------------------" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        ICharacter* me = new Character("me");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        me->unequip(1);
        me->unequip(0);

        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        delete bob;
        delete me;
        delete src;
    }
}
//     std::cout << "---------------tst equip --------------------" << std::endl;
//     {
//         IMateriaSource* src = new MateriaSource();

//         src->learnMateria(new Ice());
//         src->learnMateria(new Cure());

//         ICharacter* me = new Character("me");

//         AMateria* tmp;

//         tmp = src->createMateria("ice");
//         me->equip(tmp);
//         tmp = src->createMateria("cure");
//         me->equip(tmp);
//         tmp = src->createMateria("cure");
//         me->equip(tmp);
//         tmp = src->createMateria("cure");
//         me->equip(tmp);
//         tmp = src->createMateria("cure");
//         me->equip(tmp);
//         tmp = src->createMateria("cure");
//         me->equip(tmp);

//         ICharacter* bob = new Character("bob");

//         me->use(0, *bob);
//         me->use(1, *bob);

//         delete bob;
//         delete me;
//         delete src;

//     }

//     std::cout << "----------------tst Materia -------------------" << std::endl;
//     {
//         AMateria *m1 = new Ice();
//         AMateria *m2 = new Cure();
//         AMateria *m3 = new Ice();
//         AMateria *m4 = new Cure();
//         AMateria *m5 = new Ice();

//         ICharacter *foo = new Character("foo");
//         ICharacter *target = new Character("doo");

//         foo->equip(m1);
//         foo->equip(m2);
//         foo->equip(m3);
//         foo->equip(m4);
//         foo->equip(m5);

//         for(int i = 0; i < 4; i++)
//             foo->use(i, *target);
//         delete foo;
//         delete target;
//     }

//     std::cout << "---------------tst use equip unequip ----------------------" << std::endl;
//     {
//         ICharacter *foo = new Character("foo");
//         ICharacter *doo = new Character("doo");

//         AMateria *m1 = new Ice();
//         AMateria *m2 = new Cure();
//         AMateria *m3 = new Ice();
//         AMateria *m4 = new Cure();
//         AMateria *m5 = new Ice();

//         foo->equip(m1);
//         foo->equip(m2);
//         foo->equip(m3);
//         foo->equip(m4);

//         for(int i = 0; i < 4; i++) {
//             foo->use(i, *doo);
//         }
//         foo->unequip(0);
//         foo->unequip(1);
//         foo->unequip(2);
//         foo->unequip(3);

//         foo->equip(m5);
//         for(int i = 0; i < 4; i++) {
//             foo->use(i, *doo);
//         }

//         delete doo;
//         delete foo;
//     }
//     return 0;
// }
