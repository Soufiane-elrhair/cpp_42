/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:14:43 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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