/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:58:26 by hamza             #+#    #+#             */
/*   Updated: 2023/07/28 16:59:26 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMIMAL_HPP
# define AMIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal &operator=(const AAnimal& other);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;

protected:
	std::string	_type;
};

#endif /* AMIMAL_HPP */
