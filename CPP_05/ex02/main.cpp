#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    // try {
    //     Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);
    //     AForm *form = new RobotomyRequestForm("RobotomyRequestForm");
    //     AForm *form2 = new PresidentialPardonForm();
    //     AForm *form3 = new ShrubberyCreationForm("ShrubberyCreationForm");
    //     std::cout << form2->getName() << "\n";
    //     std::cout << "----------------------------------------" << std::endl;
    //     for (int i = 0; i < 10; i++)
    //     {
    //         form->execute(*bureaucrat);
    //     }
    //     std::cout << "----------------------------------------" << std::endl;
    //     bureaucrat->executeForm(*form);
    //     std::cout << "----------------------------------------" << std::endl;
    //     bureaucrat->executeForm(*form2);
    //     std::cout << "----------------------------------------" << std::endl;
    //     bureaucrat->executeForm(*form3);

    //     delete bureaucrat;
    //     delete form;
    //     delete form2;
    //     delete form3;
    // }
    // catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }
    try
    {
        Bureaucrat b("bureau", 100);
        Bureaucrat be("bu", 1);
        AForm *form = new ShrubberyCreationForm("RobotomyRequestForm");
        b.signForm(*form);
        b.executeForm(*form);
        be.signForm(*form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
