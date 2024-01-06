

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        throw 1;
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

void    Bureaucrat::signForm(Form& form) {
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName()<<  "\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " couldn sign " 
        << form.getName() << " because "<< e.what() << '\n';
    }
    
}
