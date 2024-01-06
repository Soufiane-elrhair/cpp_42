#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other)
    {
        AForm::operator=(other);
        this->_target = other._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const {
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        static bool check = rand() % 2;
        std::cout << "Brrrrrrrrr" << std::endl;
        if (check == true)
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized successfully" << std::endl;
        check = !check;
    }
}