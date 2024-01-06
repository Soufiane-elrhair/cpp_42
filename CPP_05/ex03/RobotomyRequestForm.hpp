#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <fstream>
#include <cstdlib>
# include "AForm.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &);
        ~RobotomyRequestForm();

        std::string getTarget() const;

        virtual void execute(Bureaucrat const & executor) const;
};

#endif /* ROBOTOMYREQUESTFORM_HPP */