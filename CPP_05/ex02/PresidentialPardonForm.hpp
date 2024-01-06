#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <fstream>
# include "AForm.hpp"
class Bureaucrat;



class PresidentialPardonForm : public AForm {
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &);
        ~PresidentialPardonForm();

        std::string getTarget() const;

        virtual void execute(Bureaucrat const & executor) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
