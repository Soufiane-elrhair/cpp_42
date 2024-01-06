
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include <ostream>
# include <string>


class Form {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExecute;
        Form();

    public:
        Form(std::string name, int gradeToSing);
        Form(const Form &);
        Form &operator=(const Form &);
        ~Form();

        std::string getName() const ;
        int         getIsSigned() const ;
        int         getGradeToSign() const ;
        int         getGradeToExecute() const ;

        void    beSigned(Bureaucrat& Bureaucrat);

    /* ---------------- Exception Classes ---------------- */
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&    operator<<(std::ostream& os, Form& rhs);

#endif /* FORM_HPP */
