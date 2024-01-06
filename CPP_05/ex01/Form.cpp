#include "Form.hpp"
#include <string>

Form::Form(std::string name, int gradeToSign )
    : _name( name ), _isSigned(false), _gradeToSign( gradeToSign ), _gradeToExecute( 0 )
{
    if ( gradeToSign < 1 )
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw Form::GradeTooLowException();
}


Form::Form(const Form &other)
    : _name(other._name), _isSigned(other._isSigned),
        _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{}

Form &Form::operator=(const Form &other)
{
    _isSigned = other._isSigned;
    return (*this);
}

Form::~Form(){}


std::string Form::getName() const {
    return(_name);
}

int Form::getIsSigned() const {
    return(_isSigned);
}

int Form::getGradeToSign() const {
    return(_gradeToSign);
}

int Form::getGradeToExecute() const {
    return(_gradeToExecute);
}

void    Form::beSigned(Bureaucrat& Bureaucrat) {
	if (Bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
   return "Grade too high";
}
const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream&    operator<<(std::ostream& os, Form& rhs) {
    std::string is_signed;

    if (rhs.getIsSigned() == true)
        is_signed = "signed";
    else
        is_signed = "not signed";
    os << "The form: " << rhs.getName() << " has grade to sign: " << rhs.getGradeToSign() << ", and grade to exec: " << rhs.getGradeToExecute() << ", the state is: " << is_signed;
   return (os);
}

