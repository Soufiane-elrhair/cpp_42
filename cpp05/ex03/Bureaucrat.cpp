/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:51:27 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/21 21:16:29 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name)
{

    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade <= 150 && grade >= 1)
        _grade = grade;
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : _name(other._name), _grade(other._grade)
{}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::incGrade(){
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decGrade(){
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;

}

const std::string	Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

std::ostream&	operator<<(std::ostream &os, Bureaucrat &rhs){
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
   return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

void    Bureaucrat::signForm(AForm& form) const{
    if (form.getIsSigned())
        std::cout << this->getName() << " singed " << form.getName() << std::endl;
    else if (this->getGrade() < form.getGradeToSign()) {
        std::cout << this->getName() << " couldn't sing "  << form.getName() << " because ";
        throw AForm::GradeTooLowException();
    }
    else if ( this->getGrade() > form.getGradeToSign())
    {
        std::cout << this->getName() << " couldn't sing "  << form.getName() << " because ";
        throw AForm::GradeTooHighException();

    }
    else {
        std::cout << this->getName() << " couldn't sing "  << form.getName() << " because ";
        std::cout << " not signed yet" << std::endl;
    }
}


void Bureaucrat::executeForm(AForm const & form) const {
    if (form.getIsSigned() && form.getGradeToExecute() >= this->getGrade())
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    else {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because ";
        throw AForm::GradeTooLowException();
    }   
}
