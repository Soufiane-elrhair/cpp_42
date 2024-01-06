#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return (*this);
}

AForm * Intern::makeForm(std::string form, std::string target)
{
    std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm *formList[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    

    for (int i = 0; i < 3; i++)
    {
        if (form == forms[i])
        {
            if (i == 0){
                delete formList[1];
                delete formList[2];}
            else if (i == 1){
                delete formList[0];
                delete formList[2];}
            else if (i == 2){
                delete formList[0];
                delete formList[1];}
            std::cout << "Intern creates " << form << std::endl;
            return (formList[i]);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        delete formList[i];
    }
    throw FormNotFound();
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}
