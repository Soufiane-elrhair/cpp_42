#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


 class  Intern
 {
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & rhs);

        AForm * makeForm(std::string form, std::string target);

    /* ---------------- Exception Classes ---------------- */
        class FormNotFound : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
 };

#endif /* INTERN_H */