/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:09:51 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/21 20:36:56 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    try {

        Bureaucrat foo("foo", 10);
        Form boo("boo", 10);
        std::cout << boo << std::endl;
        //Form zoo("zoo", 1);
        Form zoo("zoo", 10);

        boo.beSigned(foo);
        foo.signForm(boo);
        foo.signForm(zoo);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
