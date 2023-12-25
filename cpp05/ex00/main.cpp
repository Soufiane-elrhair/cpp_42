/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:45:32 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/21 18:36:47 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int main(void)
{
    try
    {
        Bureaucrat foo("foo", 3);
        //Bureaucrat bar("bar", 151);
        //Bureaucrat zoo("zoo", 0);
        foo.incGrade();
        foo.incGrade();
		std::cout << foo.getGrade() << std::endl;
        /* do some stuff with bureaucrats */
    }
    catch (std::exception &e)
    {
        /* handle exception */
        std::cout << e.what() << std::endl;
    }
    return 0;
}
