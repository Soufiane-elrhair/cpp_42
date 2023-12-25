/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:57:44 by selrhair          #+#    #+#             */
/*   Updated: 2023/11/18 12:02:13 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &other);
        Cure(std::string const &type);
        Cure &operator=(Cure const &other);
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif /* CURE_H */
