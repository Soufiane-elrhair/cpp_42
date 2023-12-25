/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:47:52 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/22 17:52:50 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Intern.hpp"

int main(void)
{
	try
	{
		Intern someRandomIntern;

		{
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		}
		std::cout << "----------------------------------------\n";
		{
			try {

				AForm* rrf;
				rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");
			}
				catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			}
		}
		std::cout << "----------------------------------------\n";
		{
			AForm* rrf;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		}
	}
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
