/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:07:01 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag;
	FragTrap frag1(frag);
	FragTrap frag2 = frag1;
	frag2.attack("frag1");
	frag1.takeDamage(20);
	frag1.beRepaired(10);
	frag1.highFivesGuys();
	return (0);
}
