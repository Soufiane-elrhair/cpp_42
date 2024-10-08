#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "[DEBUG] " << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."<< std::endl; 
    std::cout << "I just love it!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[INFO] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "<< std::endl;
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[WARNING] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ERROR] " << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (i = 0; i < 4; i++)
        if (levels[i] == level)
            break ;
    switch (i)
    {
        case  0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break ;
        default:
            std::cout <<"[ Probably complaining about insignificant problems ]"<< std::endl;
    }
}