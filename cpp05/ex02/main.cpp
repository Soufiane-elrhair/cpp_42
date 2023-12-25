/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:47:52 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/22 15:08:20 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);
        AForm *form = new RobotomyRequestForm("RobotomyRequestForm");
        AForm *form2 = new PresidentialPardonForm("PresidentialPardonForm");
        AForm *form3 = new ShrubberyCreationForm("ShrubberyCreationForm");
		form->beSigned(*bureaucrat);
		form2->beSigned(*bureaucrat);
		form3->beSigned(*bureaucrat);
        std::cout << "----------------------------------------" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            form->execute(*bureaucrat);
        }
        std::cout << "----------------------------------------" << std::endl;
        bureaucrat->executeForm(*form);
        std::cout << "----------------------------------------" << std::endl;
        bureaucrat->executeForm(*form2);
        std::cout << "----------------------------------------" << std::endl;
        bureaucrat->executeForm(*form3);

        delete bureaucrat;
        delete form;
        delete form2;
        delete form3;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
