/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:41:55 by selrhair          #+#    #+#             */
/*   Updated: 2024/01/02 16:37:37 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}