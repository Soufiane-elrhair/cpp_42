#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <exception>
class   AForm;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
        Bureaucrat();

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat&);
        ~Bureaucrat();

        const std::string   getName() const;
        int                 getGrade() const;

        void incGrade();
        void decGrade();

        void    signForm(AForm& form);
        void    executeForm(AForm const & from) const;

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

std::ostream&	operator<<(std::ostream &os, Bureaucrat &rhs);


#endif /* BUREAUCRAT_HPP */

