#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string name, int gradeToSign )
    : _name( name ), _isSigned(false), _gradeToSign( gradeToSign ), _gradeToExecute( 0 )
{
    if ( gradeToSign < 1 )
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 )
        throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute )
    : _name( name ), _isSigned(false), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute )
{
    if ( gradeToSign < 1 || gradeToExecute < 1 )
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150 )
        throw AForm::GradeTooLowException();
}


AForm::AForm(const AForm &other)
    : _name(other._name), _isSigned(other._isSigned),
        _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{}

AForm &AForm::operator=(const AForm &other)
{
    _isSigned = other._isSigned;
    return (*this);
}

AForm::~AForm(){}


std::string AForm::getName() const {
    return(_name);
}

int AForm::getIsSigned() const {
    return(_isSigned);
}

int AForm::getGradeToSign() const {
    return(_gradeToSign);
}

int AForm::getGradeToExecute() const {
    return(_gradeToExecute);
}

void    AForm::beSigned(Bureaucrat& Bureaucrat) {
	if (Bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
   return "Grade too high";
}
const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}
const char* AForm::FormNotSignedException::what() const throw() {
    return "Form not signed";
}

std::ostream&    operator<<(std::ostream& os, AForm& rhs) {
    std::string is_signed;

    if (rhs.getIsSigned() == true)
        is_signed = "signed";
    else
        is_signed = "not signed";
    os << "The form: " << rhs.getName() << " has grade to sign: " << rhs.getGradeToSign() << ", and grade to exec: " << rhs.getGradeToExecute() << ", the state is: " << is_signed;
   return (os);
}

