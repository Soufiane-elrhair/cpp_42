#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this != &other)
    {
        AForm::operator=(other);
        this->_target = other._target;
    }
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
