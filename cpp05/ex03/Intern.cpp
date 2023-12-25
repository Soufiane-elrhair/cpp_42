/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:14:40 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            std::cout << "Intern creates " << form << std::endl;
            return (formList[i]);
        }
    }
    throw FormNotFound();
}

const char* Intern::FormNotFound::what() const throw()
{
    return ("Form not found");
}
