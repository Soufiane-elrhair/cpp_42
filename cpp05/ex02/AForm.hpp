/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:25:36 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <exception>
# include <ostream>
# include <string>
class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int           _gradeToExecute;

    public:
        AForm();
        AForm(std::string name, int gradeToSing);
        AForm(std::string name, int gradeToSing, int gradeToExecute);
        AForm(const AForm &);
        AForm &operator=(const AForm &);
        virtual ~AForm();

        std::string getName() const ;
        int         getIsSigned() const ;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        void            beSigned(Bureaucrat& Bureaucrat);
        virtual void    execute(Bureaucrat const & executor) const = 0;

    /* ---------------- Exception Classes ---------------- */
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class FormNotSignedException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream&    operator<<(std::ostream& os, AForm& rhs);

#endif /* FORM_HPP */
