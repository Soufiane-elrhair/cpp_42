#include "Harl.hpp"
int main (int ac, char **av)
{
     if (ac != 2) {
        std::cout << "Use one of this Arguments :" << std::endl;
        std::cout << "./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (EXIT_FAILURE);
    }
    Harl harl;
    harl.complain(av[1]);
    return (EXIT_SUCCESS);
}