#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type);
    std::string const & getType(void) const;
    void setType(std::string type);
    ~Weapon();
};

#endif